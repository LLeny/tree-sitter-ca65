const 
  ca65mnemonic = [ 
    'adc', 'and', 'asl', 'bcc', 'bcs', 'beq', 'bit', 'bmi', 'bne', 'bpl', 'brk', 'bvc', 'bvs', 'clc', 'cld', 'cli', 'clv', 'cmp', 'cpx', 'cpy', 'dec', 'dex', 'dey', 'eor', 'inc', 'inx', 'iny', 'jmp', 'jsr', 'lda', 'ldx', 'ldy', 'lsr', 'nop', 'ora', 'pha', 'php', 'pla', 'plp', 'rol', 'ror', 'rti', 'rts', 'sbc', 'sec', 'sed', 'sei', 'sta', 'stx', 'sty', 'tax', 'tay', 'tsx', 'txa', 'txs', 'tya',
    'ADC', 'AND', 'ASL', 'BCC', 'BCS', 'BEQ', 'BIT', 'BMI', 'BNE', 'BPL', 'BRK', 'BVC', 'BVS', 'CLC', 'CLD', 'CLI', 'CLV', 'CMP', 'CPX', 'CPY', 'DEC', 'DEX', 'DEY', 'EOR', 'INC', 'INX', 'INY', 'JMP', 'JSR', 'LDA', 'LDX', 'LDY', 'LSR', 'NOP', 'ORA', 'PHA', 'PHP', 'PLA', 'PLP', 'ROL', 'ROR', 'RTI', 'RTS', 'SBC', 'SEC', 'SED', 'SEI', 'STA', 'STX', 'STY', 'TAX', 'TAY', 'TSX', 'TXA', 'TXS', 'TYA'
  ],
  ca65wdc = [
    'bra', 'brl', 'cop', 'dea', 'ina', 'jml', 'jsl', 'mvn', 'mvp', 'pea', 'pei', 'per', 'phb', 'phd', 'phk', 'phx', 'phy', 'plb', 'pld', 'plp', 'plx', 'ply', 'rep', 'rtl', 'sep', 'stp', 'stz', 'tcd', 'tcs', 'tdc', 'trb', 'tsb', 'tsc', 'txy', 'tyx', 'wai', 'xba', 'xce',
    'BRA', 'BRL', 'COP', 'DEA', 'INA', 'JML', 'JSL', 'MVN', 'MVP', 'PEA', 'PEI', 'PER', 'PHB', 'PHD', 'PHK', 'PHX', 'PHY', 'PLB', 'PLD', 'PLP', 'PLX', 'PLY', 'REP', 'RTL', 'SEP', 'STP', 'STZ', 'TCD', 'TCS', 'TDC', 'TRB', 'TSB', 'TSC', 'TXY', 'TYX', 'WAI', 'XBA', 'XCE'
  ],
  ca65rockwell = [
    /bbr[0-7]{0,1}/, /bbs[0-7]{0,1}/, /rmb[0-7]{0,1}/, /smb[0-7]{0,1}/,
    /BBR[0-7]{0,1}/, /BBS[0-7]{0,1}/, /RMB[0-7]{0,1}/, /SMB[0-7]{0,1}/
  ],
  ca65macpack = [
   'add', 'sub', 'bge', 'blt', 'bgt', 'ble', 'bnz', 'bze', 'jeq', 'jne', 'jmi', 'jpl', 'jcs', 'jcc', 'jvs', 'jvc',
   'ADD', 'SUB', 'BGE', 'BLT', 'BGT', 'BLE', 'BNZ', 'BZE', 'JEQ', 'JNE', 'JMI', 'JPL', 'JCS', 'JCC', 'JVS', 'JVC'
  ],
  ca65illegal = [
    'alr', 'anc', 'arr', 'axs', 'dcp', 'isc', 'las', 'lax', 'rla', 'rra', 'sax', 'slo', 'sre',
    'ALR', 'ANC', 'ARR', 'AXS', 'DCP', 'ISC', 'LAS', 'LAX', 'RLA', 'RRA', 'SAX', 'SLO', 'SRE'
  ],
  operators = [
    '+', '-', '/', '*', '<', '>', '!', '|'
  ],
  brackets = [
    '(', ')', '[', ']', '{', '}'
  ],
  separators = [
    ','
  ];

module.exports = grammar({
  name: 'ca65',

  extras: $ => [
    /\s+/,
    $.comment,
    $.string,
    $.char
  ],

  rules: {
    source_file: $ => repeat($._line),
    
    _line: $ => seq(
      choice(
        $._statement,
        $._preproc,
        $.equ
      ),
      /\r?\n/
    ),

    _statement: $ => choice(
      $.label,
      seq(
        $.mnemonic,
        optional(
          $.operand
        )
      ),
      prec(1, seq(
        $.label,
        $.mnemonic,
        optional(
          $.operand
        )
      ))
    ),

    mnemonic: $ => token(choice(
      ...ca65mnemonic,
      ...ca65wdc,
      ...ca65rockwell,
      ...ca65macpack,
      ...ca65illegal
    )),

    operand: $ => choice(
      $.mem_address,
      $.value,
      $.register,
      seq(
        $.mem_address, 
        $.separator,
        choice(
          $.register,
          $.number
       )
      )
    ),

    mem_address: $ => choice(
      seq(':+', repeat('+')),
      seq(':-', repeat('-')),
      repeat1(
        choice(
          $.base,
          $.number,
          $.identifier,
          $.operator,
          $.bracket
        )
      )
    ),   

    equ: $ => seq(
      field('constant', $.identifier),
      field('equ', $.equal),
      field('value', $.anything)
    ),

    procstart: $ => token(choice('.proc', '.PROC')),
    procend: $ => token(choice('.endproc', '.ENDPROC')),
    proc: $ => seq(
      $.procstart,
      field("proc_name", $.identifier),
      optional(
        seq(
          ':',
          choice('near', 'far', 'huge', 'NEAR', 'FAR', 'HUGE')
        )
      ),
      repeat1($._statement),
      $.procend
    ),

    macrostart: $ => token(choice('.macro', '.mac', '.MACRO', '.MAC')),
    macroend: $ => token(choice('.endmacro', '.endmac', '.ENDMACRO', '.ENDMAC')),
    macro: $ => seq(
      $.macrostart, 
      $.identifier,
      repeatSep($.identifier, $.separator),
      repeat1($._statement),
      $.macroend
    ),

    preprocgen: $ => seq(
      $.preproccmd,
      repeat(
        choice(
          $.number,
          $.string,
          $.identifier,
          $.base,
          $.operator,
          $.bracket,
          $.separator
        )
      )
    ),

    _preproc: $ => choice(
      $.proc,
      $.macro,
      $.preprocgen
    ),

    register: $ => token(
      choice(
        'a', 'x', 'y', 'A', 'X', 'Y'
      )
    ),

    value: $ => seq(
      $.valuetag,
      repeat(
        choice(
          $.base, 
          $.number, 
          $.identifier,
          $.operator,
          $.bracket
        )
      )
    ),

    base: $ => token(
      choice(
        '$', '%'
      )
    ),

    operator: $ => token(
      choice(...operators)
    ),

    bracket: $ => token(
      choice(...brackets)
    ),

    separator: $ => token(
      choice(...separators)
    ),

    valuetag: $ => token('#'),
    equal: $ => token('='),
    anything: $ => /.+/,
    label: $ => /@{0,1}[a-zA-Z0-9_]*:/, 
    number: $ => /[0-9a-fA-F]+/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    preproccmd: $ => /.[a-zA-Z_]+/,
    comment: $ => /;.*/,
    string: $ => /".*"/,
    char: $ => /\'.\'/,
  }
});

function repeatSep1(rule, sep) {
  return seq(
    rule,
    repeat(seq(sep, rule)),
  );
}

function repeatSep(rule, sep) {
  return optional(repeatSep1(rule, sep));
}

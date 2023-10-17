============
macro no arg
============
.macro testmacro
  lda   #02
.endmacro

---
(source_file
  (macro
    (macrostart)
    (identifier)
    (mnemonic)
    (operand
      (value
        (valuetag)
        (number)))
    (macroend)))

============
macro args
============
.macro testmacro arg1, arg2
  lda   arg1
  sta   arg2
.endmacro

---
(source_file
  (macro
    (macrostart)
    (identifier)
    (identifier)
    (separator)
    (identifier)
    (mnemonic)
    (operand
      (mem_address
        (identifier)))
    (mnemonic)
    (operand
      (mem_address
        (identifier)))
    (macroend)))

============
macro short
============
.mac testmacro
  lda   #02
.endmac

---
(source_file
  (macro
    (macrostart)
    (identifier)
    (mnemonic)
    (operand
      (value
        (valuetag)
        (number)))
    (macroend)))


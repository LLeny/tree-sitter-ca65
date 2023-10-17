=================
label
=================
label1:
  jmp   label1

---
(source_file
  (label)
  (mnemonic)
  (operand
    (mem_address
      (identifier))))

=================
label local
=================
@label1:
  lda   #02

---
(source_file
  (label)
  (mnemonic)
  (operand
    (value
      (valuetag)
      (number))))

=================
label unnamed -
=================
:
  jmp   :-

---
(source_file
  (label)
  (mnemonic)
  (operand
    (mem_address)))

=================
label unnamed +
=================
  jmp   :+
: lda   #02

---
(source_file
  (mnemonic)
  (operand
    (mem_address))
  (label)
  (mnemonic)
  (operand
    (value
      (valuetag)
      (number))))

=================
label unnamed +++
=================
  jmp   :+++

---
(source_file
  (mnemonic)
  (operand
    (mem_address)))

=================
label unnamed -- 
=================
  jmp   :--

---
(source_file
  (mnemonic)
  (operand
    (mem_address)))

=================
label same line
=================
label:lda #02
label2: lda #03

---
(source_file
  (label)
  (mnemonic)
  (operand
    (value
      (valuetag)
      (number)))
  (label)
  (mnemonic)
  (operand
    (value
       (valuetag)
       (number))))


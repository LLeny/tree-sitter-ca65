====================
operand number dec
====================
  lda   #12

---
(source_file
  (mnemonic)
  (operand
    (value
      (valuetag)
      (number))))

===================
operand number bin
====================
  lda   #%01010100

---
(source_file
  (mnemonic)
  (operand
    (value
      (valuetag)
      (base)
      (number))))
 
====================
operand number hex
====================
  lda   #$BEEF

---
(source_file
  (mnemonic)
  (operand
    (value
      (valuetag)
      (base)
      (number))))

====================
operand addr 
====================
  lda   $DEAD

---
(source_file
  (mnemonic)
  (operand
    (mem_address
      (base)
      (number))))

====================
operand char
====================
  lda   'c'

---
(source_file
  (mnemonic)
  (char))

====================
operand register 
====================
  rol   a   

---
(source_file
  (mnemonic)
  (operand
    (register)))

====================
operand addr register
====================
  lda   $DEAD,x

---
(source_file
  (mnemonic)
  (operand
    (mem_address
      (base)
      (number))
    (separator)
    (register)))

====================
operand sep register
====================
  sta   data, y

---
(source_file
  (mnemonic)
  (operand
    (mem_address
      (identifier))
    (separator)
    (register)))

===================
operand addr hi/lo
===================
  lda   #>(data)
  sta   #<(data)

---
(source_file
  (mnemonic)
  (operand
    (value
      (valuetag)
      (operator)
      (bracket)
      (identifier)
      (bracket)))
  (mnemonic)
  (operand
    (value
      (valuetag)
      (operator)
      (bracket)
      (identifier)
      (bracket))))


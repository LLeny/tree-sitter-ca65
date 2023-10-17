================
instr base
================
  lda     #04

---
(source_file
  (mnemonic)
  (operand
    (value
      (valuetag)
      (number))))

================
instr wdc
================
  bra     $0463

---
(source_file
  (mnemonic)
  (operand
    (mem_address
      (base)
      (number))))

================
instr rockwell
================
  bbs
  smb7

---
(source_file
  (mnemonic)
  (mnemonic))

================
instr macpack
================
  jmi   $5ab0

---
(source_file
  (mnemonic)
  (operand
    (mem_address
      (base)
      (number))))

================
instr illegal
================
  axs
  alr

---
(source_file
  (mnemonic)
  (mnemonic))


=====================
proc base
=====================
.proc testproc
  lda   #02
.endproc

---
(source_file
  (proc
    (procstart)
    (identifier)
    (mnemonic)
    (operand
      (value
        (valuetag)
        (number)))
    (procend)))

=====================
proc near
=====================
.proc testproc: near
  lda   #$0B
.endproc

---
(source_file
  (proc
    (procstart)
    (identifier)
    (mnemonic)
    (operand
      (value
        (valuetag)
        (base)
        (number)))
    (procend)))

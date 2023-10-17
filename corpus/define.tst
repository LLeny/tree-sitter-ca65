================
.define
================
.define EQUTEST $8B41

---
(source_file
  (preprocgen
    (preproccmd)
    (identifier)
    (base)
    (number)))

================
equal
================
EQUTEST = $01A1

---
(source_file
  (equ
    (identifier)
    (equal)
    (anything)))

================
.define ()
================
.define EQUTEST ($8B41+1)

---
(source_file
  (preprocgen
    (preproccmd)
    (identifier)
    (bracket)
    (base)
    (number)
    (operator)
    (number)
    (bracket)))

================
equal ()
================
EQUTEST = ($01A1+CONST)

---
(source_file
  (equ
    (identifier)
    (equal)
    (anything)))



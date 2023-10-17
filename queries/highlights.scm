(preproccmd) @keyword.directive
(procstart) @keyword.directive
(procend) @keyword.directive
(macrostart) @keyword.directive
(macroend) @keyword.directive

(proc proc_name: (identifier) @function)

(mnemonic) @function.builtin

(equ constant: (identifier) @variable)
(equ equ: (equal) @operator)
(equ value: (anything) @constant)

(base) @type
(value) @variable
(mem_address) @variable
(register) @constant.builtin

(string) @string
(char) @string
(number) @number
(comment) @comment
(label) @tag
(operator) @operator
(separator) @punctuation.delimiter
(bracket) @punctuation.bracket
(valuetag) @punctuation.delimiter 

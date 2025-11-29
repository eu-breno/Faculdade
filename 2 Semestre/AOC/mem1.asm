%include	'../util.asm'

section		.text
global		_start

_start:
    mov     rdi, [var4]
	call	printint
    call    enld

    call    exit0


section     .data
var1:       db 55           ; db é de um bite
var2:       dw 5500         ; dw é valor de dois bites
var3:       dd 100000       ; double word, tem 4 bites
var4:       dq 1234567890   ; dq é de 8 bites
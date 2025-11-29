%include	'../util.asm'

section		.text
global		_start

_start:
    mov     rdi, [rbx+16]
	call	printint
    call    enld

    call    exit0


section     .data
vet:        dq 1000, -5, 91, 314, 321
%include	'../util.asm'

section		.text
global		_start

_start:
    lea     rdi, [prompt]
	call	printstr
    call    readint
    mov     r12, rax
    call    readint
    mov     r13, rax

    cmp     r12, r13
    jg      maior

    mov     r14, r13
    lea     rdi, [resultado]
    call    printstr
    mov     rdi, r14
    call    printint
    call    endl
    call    exit0
    
maior:
    mov     r14, r12
    lea     rdi, [resultado]
    call    printstr
    mov     rdi, r14
    call    printint
    call    endl
    call    exit0


section		.data
prompt:		db 'Informe dois valores: ', 10, 0
resultado:  db 'Maior :', 0

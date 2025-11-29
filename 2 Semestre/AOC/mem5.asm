%include	'../util.asm'

section		.text
global		_start

_start:
    xor     r15, r15 ; i = 0

.for_dados:
    call    readint
    mov     [vet+r15*8], rax
    inc     r15
    cmp     r15, 15
    jl      .for_dados

.loop_print:
    mov     rdi, [vet+r15*8]
    call    printint
    call    endl
    dec     r15
    cmp     r15, 0
    jg      .loop_print

    call    exit0

section     .bss
vet:        resq 15

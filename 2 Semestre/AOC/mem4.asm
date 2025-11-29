%include	'../util.asm'

section		.text
global		_start

_start:
    xor     r15, r15 ; i = 0

.for:
    call    readint
    mov     [vet+r15*8], rax
    inc     r15
    cmp     r15, 10
    jl      .for
    call    exit0


section     .bss
vet:        resq 10


; for(int i=0; i<10; i++){
;   vet[i] = readint();
;}
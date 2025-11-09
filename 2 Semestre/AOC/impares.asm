; Escrever um programa assembly NASM
; com util.asm que lê uma quantidade
; indeterminada de números inteiros, 
; encerrando a entrada quando for digitado 0 (zero).
; No final exibir a quantidade de números
; ímpares que foram informados. 
; Não usar divisão para o teste.
%include	'../util.asm'

section		.text
global		_start

_start:
    xor     r12, r12
laco:
    call    readint
    cmp     rax, 0
    je      fim
    shr     rax, 1
    jnc     laco
    inc     r12
    jmp     laco
fim:
    mov     rdi, r12
    call    printint
    call    endl
	call	exit0

            

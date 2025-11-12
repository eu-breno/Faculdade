%include '../util.asm'
%include 'funcoes.asm'

section     .text

extern      fatorial
global      _start

_start:
    lea     rdi, [txt1]
    call    printstr
    call    readint
    mov     rbx, rax

    mov     rdi, rbx
    call    fatorial
    mov     r15, rax

    lea     rdi, [txt2]
    call    printstr
    mov     rdi, rbx
    call    printint
    lea     rdi, [txt3]
    call    printstr

    call    exit0

section     .data
txt1:       db 'Informe um inteiro: ', 0
txt2:       db 'O fatorial de ',  0
txt3:       db ' é ', 0
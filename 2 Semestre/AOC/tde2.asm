; Nome: Breno Olliari | Matricula: 208485

%include	'../util.asm'

section		.text
global		_start


N:           equ 6

_start:
    xor     r14, r14   

    lea     rdi, [txt1]
    call    read_number    
    mov     r12, rax       
    mov     r13, rax       

.loop:
    inc     r14
    cmp     r14, N
    je     .fim

    lea     rdi, [txt1]
    call    read_number

    ; CMOVG
    cmp     rax, r12
    cmovg   r12, rax

    ; CMOVL
    cmp     rax, r13
    cmovl   r13, rax

    jmp     .loop

.fim:
    lea     rdi, [txt2]
    call    printstr
    mov     rax, r12
    sub     rax, r13
    mov     rdi, rax
    call    printint

    call    exit0

read_number:
    call    printstr
    call    readint
    ret

section     .data
txt1:      db 'Informe um numero: ', 0
txt2:      db 'Diferenca (max - min): ', 0


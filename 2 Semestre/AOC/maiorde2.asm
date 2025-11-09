%include	'../util.asm'

section		.text
global		_start

_start:
    lea     rdi, [msg]
    call    printstr
    call    readint
    mov     r12, rax    ; n1
    call    readint
    mov     r13, rax    ; n2
    cmp     r12, r13
    jg      n1maior
    mov     r14, r13    ; m = n2
    jmp     fim
n1maior:
    mov     r14, r12    ; m = n1
fim:    
    lea     rdi, [msg2]
    call    printstr
    mov     rdi, r14
    call    printint
    call    endl
	call 	exit0   
	            
section		.data
msg:		db 'Informe dois valores: ', 10, 0
msg2:       db 'Maior: ', 0
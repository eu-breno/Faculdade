section.text

global      fatorial

fatorial:
    mov     rax, 1

.ini:
    cmp     rdi, 2
    jl      .fim
    imul    rax, rdi
    dec     rdi
    jmp     .ini

.fim:
    ret 
    
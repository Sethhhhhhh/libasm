section .text
        global  ft_strlen

ft_strlen:
    mov     rax, 0
    jmp     loop

loop:
    cmp     rdi, 0
    jle     null
    cmp     BYTE [rdi + rax], 0
    je      return
    inc     rax
    jmp     loop

null:
    mov     rax, 0
    ret

return:
    ret       

section .text
        global  _ft_strlen

_ft_strlen:
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

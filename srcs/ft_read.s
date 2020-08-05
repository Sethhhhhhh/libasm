section .text
    global _ft_read

_ft_read:
    mov     rax,    0x02000003
    syscall
    cmp     rax,    0
    je      null
    ret

null:
    ret
section .text
    extern _malloc, _ft_strlen, ft_strcpy
    global _ft_strdup

_ft_strdup:
    call    _ft_strlen
    mov     rdi,        rax
    call    _malloc
    mov     rdi,        rax
    call    _ft_strcpy
    ret

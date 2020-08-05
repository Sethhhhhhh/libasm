section .text
    extern _malloc, _ft_strlen, _ft_strcpy, ___error
    global _ft_strdup

_ft_strdup:
    push    rdi
    call    _ft_strlen
    mov     rdi,        rax
    call    _malloc
    cmp     rax,        0
    je      null
    mov     rdi,        rax
    pop     rsi
    call    _ft_strcpy
	ret

null:
    pop     rdi
    call    ___error
	mov		rdi,		12
    mov		[rax],		rdi
	mov		rax,		0
    ret
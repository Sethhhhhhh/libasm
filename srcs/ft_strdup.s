section .text
    extern malloc, ft_strlen, ft_strcpy, __errno_location
    global ft_strdup

ft_strdup:
    push    rdi
    call    ft_strlen
	inc		rax
    mov     rdi,        rax
    call    malloc
    cmp     rax,        0
    je      null
    mov     rdi,        rax
    pop     rsi
    call    ft_strcpy
	ret

null:
    pop     rdi
    call    __errno_location
	mov		rdi,		12
    mov		[rax],		rdi
	mov		rax,		0
    ret

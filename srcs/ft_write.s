section .text
    global _ft_write
    extern ___error

_ft_write:
    mov     rax,    0x02000004
    syscall
    cmp     rax,    0
    je      null
    ret

null:
    push    rdi
    call    ___error
    pop     rdi
    mov		[rax],		rdi
	mov		rax,		-1
    ret
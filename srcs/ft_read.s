section .text
    extern __errno_location
    global ft_read

ft_read:
    mov     rax,    0
    syscall
    cmp     rax,    0
    je      null
    ret

null:
    push    rdi
    call    __errno_location
    pop     rdi
    mov		[rax],		rdi
	mov		rax,		-1
    ret

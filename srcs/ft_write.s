section .text
    global ft_write
    extern __errno_location

ft_write:
    mov     rax,    1
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

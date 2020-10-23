section .text
	global ft_strcpy

ft_strcpy:
    mov     rax,    			rsi
    mov     rcx,    			0


loop:
    inc     rcx
    mov     r8b,				byte [rsi + rcx]
	mov     byte [rdi + rcx],	r8b
	cmp		r8b,				0
	jne		loop
    ret

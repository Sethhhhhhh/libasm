section .text
    global ft_strcmp

ft_strcmp:
loop:
	mov		al, 		byte [rdi]
	mov		ah, 		byte [rsi]

	test 	ax,			ax
	jz		equal

	cmp		al,			ah
	jg		pos
	jl		neg

	inc		rsi
	inc		rdi
	jmp		loop

pos:
	mov		rax,		1
	ret

neg:
	mov		rax,		-1
	ret

equal:
	mov		rax,		0
	ret

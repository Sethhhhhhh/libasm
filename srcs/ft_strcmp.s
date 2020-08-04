section .text
    global _ft_strcmp

_ft_strcmp:
loop:
	cmp		byte [rdi],	0
	jz		end
	cmp		byte [rsi],	0
	jz		end

	mov		al, 		byte [rdi]
	mov		ah, 		byte [rsi]
	
	cmp		al,			ah
	jl		is_neg		
	jg		is_pos

	inc		rsi
	inc		rdi
	jmp		loop

is_pos:
	mov		rax,		1
	ret

is_neg:
	mov		rax,		-1
	ret
end:
	mov		rax,		0
	ret
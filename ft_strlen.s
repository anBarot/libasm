section	.text
	global	ft_strlen

ft_strlen:
    mov  	rax, rdi 
	mov		rcx, 0x00
	CMP		rax, 0x00
	JE		.END

	.L :
	CMP		byte[rax], 0x00
	JE		.END
	inc		rcx
	inc		rax
	JMP		.L

	.END :
	push	rcx
	pop		rax
	ret

section	.text
	global	ft_strlen

ft_strlen:
    mov  	rcx, rdi 
	mov		rax, 0x00
	CMP		rcx, 0x00
	JE		.END

	.L:
	CMP		byte[rcx], 0x00
	JE		.END
	inc		rax
	inc		rcx
	JMP		.L

	.END:
	ret

section		.text:
global      ft_strchr

ft_strchr:
	mov		rax,0x00
	push	rbp

	.L1:	
	movzx	rbp,byte[rdi]
	CMP		rbp,rsi
	JE		.END
	CMP		rbp,0x00
	JE		.NOT_FOUND
	inc		rdi
	inc		rax
	JMP		.L1

	.END:
	pop		rbp
	ret

	.NOT_FOUND:
	pop		rbp
	mov		rax,-1	
	ret
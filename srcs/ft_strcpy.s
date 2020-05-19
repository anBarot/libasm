section	.text
	global	ft_strcpy

ft_strcpy:
		mov		rbx,rdi
	.L1:
		movzx	rcx,byte[rsi]
		mov		[rdi],rcx
		CMP		rcx,0x00
		JE		.END
		inc 	rdi
		inc		rsi
		JMP		.L1
	.END:
		mov		rax,rbx
		ret

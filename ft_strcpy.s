section	.text
	global	ft_strcpy

ft_strcpy:
	push		rbp
	.L1:
		mov		rbp,[rsi]
		CMP		rbp, 0x00
		JE		.END
		mov		[rdi],rbp
		inc 	rdi
		inc		rsi
		JMP		.L1
	.END:
		pop		rbp
		ret

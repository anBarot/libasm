section	.text
	global	ft_strcmp

ft_strcmp:
		push	rbp
	.L1:
		mov		rbp,[rsi]
		CMP		[rdi], rbp
		JG		.GREATER
		JL		.LESS
		JE		.EQUAL
	.EQUAL:
		push	0
		CMP		rbp,0x00
		JE		.END
		JMP		.L1
	.LESS:
		push	-1
		JMP		.END
	.GREATER:
		push	1
		JMP		.END
	.END:
		pop		rbp
		ret




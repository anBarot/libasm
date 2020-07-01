section	.text
	global	ft_strcmp

ft_strcmp:
	.BEGIN:
		CMP		rsi,0x00
		JE		.END_E
		CMP		rdi,0x00
		JE		.END_E

	.L1:
		mov		rcx,[rsi]
		CMP		[rdi], rcx
		JL		.END_L
		JG		.END_G
		JE		.EQUAL

	.EQUAL:
		CMP		rcx,0x00
		JE		.END_E
		inc		rdi
		inc		rsi
		JMP		.L1

	.END_G:
		mov		rax,0xFFFFFFFF
		ret

	.END_L:
		mov		rax,0x01
		ret

	.END_E:
		mov		rax,0x00
		ret
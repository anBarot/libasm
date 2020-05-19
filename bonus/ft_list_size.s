section		.text:
global		ft_list_size

ft_list_size:
	cmp		rdi,0x00
	JE		.NO_LIST
	mov		rax,0x00
	add		rdi,0x08

	.L1:
	inc		rax
	mov		rdx,0x00
	mov		rbx,[rdi]
	cmp		rbx,0x00
	JE		.END
	add		rdi,0x20
	JMP		.L1

	.END:
	ret

	.NO_LIST:
	mov		rax,0x00
	ret
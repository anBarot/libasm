section		.text:
global		ft_list_push_front
extern		malloc

ft_list_push_front:
	mov		rcx,rdi
	cmp		rdi,0x00
	JE		.ERROR
	cmp		byte[rdi],0x00
	JE		.ONLY_EL
	JNE		.FIRST_EL

	.ONLY_EL:
	mov		rdi,0x20
	call	malloc
	mov		rbx,rax
	mov		[rbx],rsi
	add		rbx,8
	mov		rbx,0x00
	mov		rcx,rbx
	ret

	.FIRST_EL:
	mov		rdi,0x20
	call	malloc
	mov		rbx,[rax]
	mov		[rbx],rsi
	add		rbx,8
	mov		rbx,[rcx]
	mov		[rcx],rax
	ret

	.ERROR:
	ret
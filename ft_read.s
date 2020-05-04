section     .text
global      ft_read

ft_read:
	mov		rax,0x00
	syscall
	mov		rbx,rax
	CMP		rbx,0x00
	JL		.ERROR
	ret

	.ERROR:
	mov		rax,0xFFFFFFFF
	ret

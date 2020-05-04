section     .text
global      ft_read
extern		error

ft_read:
	mov		rax,0x00
	syscall
	CMP		rax,0x00
	JL		.ERROR
	ret

	.ERROR:
	mov		rax,0xFFFFFFFF
	ret

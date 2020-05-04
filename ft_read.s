section     .text
global      ft_read
extern		error

ft_read:
	mov		rax,0x00
	syscall
	JGE		.END
	call	error
	ret

	.END:
	ret
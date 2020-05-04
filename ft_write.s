section     .text
global      ft_write    
extern		error                  

ft_write:
	mov		rax,0x01
	syscall
	JGE		.END
	call	error
	ret

	.END:
	ret
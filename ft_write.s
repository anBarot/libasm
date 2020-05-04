section     .text
global      ft_write    
extern		error
extern		ft_read

ft_write:
	mov		rax,0x01
	syscall
	mov		rbx,rax
	CMP		rbx,0x00
	JL		.ERROR
	ret

	.ERROR:
	call	ft_read
	ret

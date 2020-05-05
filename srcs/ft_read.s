section     .text
global      ft_read
extern		__errno_location

ft_read:
	mov		rax,0x00
	syscall
	CMP		rax,0x00
	JL		.ERROR
	ret

	.ERROR:
	neg		rax
	mov		rbx,rax
	call	__errno_location
	mov		rcx,rax
	mov		[rcx],rbx
	mov		rax,-1
	ret

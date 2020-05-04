section     .text
global      ft_write  
extern 		___error

ft_write:
	mov		rax,0x01
	syscall
	CMP		rax,0x00
	JL		.ERROR
	ret

	.ERROR:
	push 	rbp
    mov 	rbp, rsp
    call 	___error
    mov 	rsp, rbp
    pop 	rbp
	mov		rax,-1
	push	rax
	ret
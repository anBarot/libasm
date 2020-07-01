section     .text
global      ft_strdup   
extern		ft_strlen           
extern		malloc           
extern		ft_strcpy 
extern		___error

ft_strdup:
	CMP		rdi,0x00
	JE		.NUL_STR
	mov		rbx,rdi
	call	ft_strlen
	mov		rdi,rax
	inc		rdi
	call	malloc
	CMP		rax,0x00
	JE		.ERROR
	mov		rdi,rax
	mov		rsi,rbx
	call	ft_strcpy
	ret

	.NUL_STR:
	mov		rax,0x00
	ret

	.ERROR:
	neg		rax
	mov		rbx,rax
	call	___error
	mov		rcx,rax
	mov		[rcx],rbx
	mov		rax,0x00
	ret

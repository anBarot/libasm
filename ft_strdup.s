section     .text
global      ft_strdup   
extern		ft_strlen           
extern		malloc           
extern		ft_strcpy    

ft_strdup:
	CMP		rdi,0x00
	JE		.NUL_STR
	mov		rbx,rdi
	call	ft_strlen
	mov		rdi,rax
	call	malloc	
	mov		rdi,rax
	mov		rsi,rbx
	call	ft_strcpy
	ret

	.NUL_STR:
	mov		rax,0x00
	ret

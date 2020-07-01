section		.text:
global      ft_atoi_base
extern		ft_strchr
extern		ft_strcpy
extern		ft_strlen

ft_atoi_base:
	.INIT:
	push	r10	
	push	r11
	push	r12
	CMP		rdi,0x00
	JE		.ERROR
	CMP		rsi,0x00
	JE		.ERROR
	CMP		byte[rdi],0x00
	JE		.ERROR
	mov		rax,0x00
	mov		r9,0x00
	mov		r12,0x00

	.BEGIN:
	mov		r10,rsi
	mov		r8,rdi
	mov		rdi,r10
	call	ft_strlen
	mov		r11,rax

	.SIGN:
	movzx	rsi,byte[r8]
	CMP		rsi,'-'
	JNE		.L1
	mov		r12,1
	inc		r8

	.L1:
	movzx	rsi,byte[r8]
	mov		rdi,r10
	call	ft_strchr
	CMP		rax,-1
	JE		.ERROR
	add		r9,rax
	inc		r8
	CMP		byte[r8],0x00
	JE		.PRE_END
	mov		rax,r9
	mul		r11
	mov		r9,rax
	JMP		.L1

	.PRE_END:
	mov		rax,r9
	CMP		r12,1
	JNE		.END
	neg		rax
	JMP		.END

	.ERROR:
	mov		rax,0
	JMP		.END
	ret

	.END:
	pop		r10
	pop		r11
	pop		r12
	ret
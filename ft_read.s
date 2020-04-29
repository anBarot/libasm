%macro read 3
mov		rdx, %3
mov     rsi, %2                              
mov     rdi, %1                              
mov     rax, 0                              
syscall                          
%endmacro

section     .text
global      ft_read                      

ft_read:
	read	rdi, rsi, rdx
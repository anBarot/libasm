%macro write 3
mov		rdx, %3
mov     rsi, %2                              
mov     rdi, %1                              
mov     rax, 1                              
syscall                          
%endmacro

section     .text
global      ft_write                      

ft_write:
	write 	rdi, rsi, rdx
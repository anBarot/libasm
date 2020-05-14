#include "libasm_bonus.h"

void	test_1()
{
	printf("\nF base 16 : %d\n",ft_atoi_base("F","0123456789ABCDEF"));
	printf("\nFF base 16 : %d\n",ft_atoi_base("FF","0123456789ABCDEF"));
	printf("\n-FF base 16 : %d\n",ft_atoi_base("-FF","0123456789ABCDEF"));
	printf("\nno string arg1: %d\n",ft_atoi_base(0,"0123456789ABCDEF"));
	printf("\nno string arg2: %d\n",ft_atoi_base("FF",0));
	printf("\nempty string arg1: %d\n",ft_atoi_base("","0123456789"));
	printf("\nempty string arg2: %d\n",ft_atoi_base("FF",""));
	printf("\nFFFF base 16 : %d\n",ft_atoi_base("FFFF","0123456789ABCDEF"));
	printf("\n0 base 10 : %d\n",ft_atoi_base("0","0123456789"));
	printf("\n0 base 16 : %d\n",ft_atoi_base("0","0123456789ABCDEF"));
	printf("\n101 base 2 : %d\n",ft_atoi_base("101","01"));
	printf("\n1101010101011 base 2 : %d\n",ft_atoi_base("1101010101011","01"));
	printf("\ntip base pinte (310 base 5) : %d\n",ft_atoi_base("tip","pinte"));
	printf("\nbinouze base pinte : %d\n",ft_atoi_base("binouze","pinte"));
}

int 	main()
{
	printf("\n\n-----------test ft_atoi_base-----------\n\n");
	test_1();
	// printf("\n\n------------test ft_list_push_front------------\n\n");
	// test_2();
	// printf("\n\n------------test ft_list_remove_if------------\n\n");
	// test_3();
	// printf("\n\n------------test ft_list_size------------\n\n");
	// test_4();
	// printf("\n\n------------test ft_list_sort------------\n\n");
	// test_5();
	return (0);
}
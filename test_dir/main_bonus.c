#include "./../include/libasm_bonus.h"

void	test_3()
{
	t_list **ls_beg;
	t_list *ls;
	t_list *ls_2;

	ls_beg = (t_list **)malloc(sizeof(t_list *));
	ls = (t_list *)malloc(sizeof(t_list));
	ls_2 = (t_list *)malloc(sizeof(t_list));

	*ls_beg = ls;
	ls->data = (char *)ft_strdup("begin list!");
	ls->next = ls_2;
	ls_2->data = (char *)ft_strdup("end list");
	ls_2->next = 0;

	char *tmp = ft_strdup("hello!"); 

	printf("\nlist size before : %d\n",ft_list_size(*ls_beg));
	ft_list_push_front(ls_beg,tmp);

	free(ls->data);
	free(ls_2->data);
	free(tmp);
	free(ls_2);
	free(ls);
	free(*ls_beg);
	free(ls_beg);
}

void	test_2()
{
	t_list *ls;
	t_list *ls_2;
	t_list *ls_3;
	t_list *ls_4;

	ls = (t_list *)malloc(sizeof(t_list));
	ls_2 = (t_list *)malloc(sizeof(t_list));
	ls_3 = (t_list *)malloc(sizeof(t_list));
	ls_4 = (t_list *)malloc(sizeof(t_list));

	ls->data = (char *)ft_strdup("begin list!");
	ls->next = ls_2;
	ls_2->data = (char *)ft_strdup("intermediate");
	ls_2->next = ls_3;
	ls_3->data = (char *)ft_strdup("end list!");
	ls_3->next = ls_4;
	ls_4->data = (char *)ft_strdup("end list!");
	ls_4->next = 0;

	printf("\nResult list with 4 elements : %d\n",ft_list_size(ls));

	ls_3->next = 0;

	printf("\nResult after retreiving the last element (ls_3->next = 0) : %d\n",ft_list_size(ls));

	ls = ls->next;

	printf("\nResult after advancing the first element (ls = ls->next) : %d\n",ft_list_size(ls));

	printf("\nNo arguments : %d\n",ft_list_size(0));

	free(ls->data);
	free(ls_2->data);
	free(ls_3->data);
	free(ls_4->data);
	free(ls);
	free(ls_2);
	free(ls_3);
	free(ls_4);
}

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
	printf("\n\n------------test ft_list_size------------\n\n");
	test_2();
	// printf("\n\n------------test ft_list_push_front------------\n\n");
	// test_3();
	return (0);
}
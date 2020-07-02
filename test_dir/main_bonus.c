/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:21:32 by abarot            #+#    #+#             */
/*   Updated: 2020/07/02 14:50:01 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_bonus.h"

void	test_2()
{
	t_list **head;
	t_list *ls;
	t_list *ls_2;
	t_list *ls_3;
	t_list *ls_4;


	head = (t_list **)malloc(sizeof((head)));
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

	printf("\nft_list_size with no arguments (0) : %d\n",ft_list_size(0));

	*head = ls;

	printf("\nValue of data of the first element in list : %s\n", (char *)(*head)->data) ;

	char *data = ft_strdup("hello !");
	ft_list_push_front(head, data);

	printf("\nAdding an element with ft_list_push_front, data = string 'hello !' :\nSize of list : %d\nData : %s\n", ft_list_size(*head), (char *)(*head)->data);

	free(ls->data);
	free(ls_2->data);
	free(ls_3->data);
	free(ls_4->data);
	free(data);
	free(ls);
	free(ls_2);
	free(ls_3);
	free(ls_4);
	free(head);
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
	printf("\n10592 base 10 : %d\n",ft_atoi_base("10592","0123456789"));
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
	printf("\n\n------------test ft_list_size && list push front------------\n\n");
	test_2();
	return (0);
}
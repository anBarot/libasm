#include <stdio.h>
#include "lib.h"

void	test_4()
{
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello1","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello1"));
}

void	test_3()
{
	printf("\nft_strlen 1: %ld\n", ft_strlen("hello!"));
	printf("\nft_strlen 2: %ld\n", ft_strlen(0));
	printf("\nft_strlen 3: %ld\n", ft_strlen(""));
}

void	test_2()
{
	ft_write(1,"hello\n",3);
	ft_write(1,"hello\n",6);
}

void	test_1()
{
	char *str = "hello\n";
	char *str2 = malloc(10);
	printf("\n%p\n%p\n",str,str2);
	printf("\n%s\n",ft_strcpy(str2,str));
	printf("\n%s\n",ft_strcpy(str2,"hi"));
}

int main()
{
	// test_4();
	test_3();
	test_2();
	test_1();
	return (0);
}
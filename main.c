#include "lib.h"

void	test_5()
{
	printf("\nft_strdup : %s\n", ft_strdup("byebye"));
	printf("\nft_strdup : %s\n", ft_strdup(0));
}

void	test_4()
{
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello"));
	printf("\nstrcmp: %d\n", strcmp("hello","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello1","hello"));
	printf("\nstrcmp: %d\n", strcmp("hello1","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello1"));
	printf("\nstrcmp: %d\n", strcmp("hello","hello1"));
	// printf("\nft_strcmp: %d\n", ft_strcmp("aaa",0));
	// printf("\nstrcmp: %d\n", strcmp("aaa",0)); ==>segfault
	// printf("\nft_strcmp: %d\n", ft_strcmp(0,"aaa"));
	// printf("\nstrcmp: %d\n", strcmp(0,"aaa")); ==>segfault
	// printf("\nft_strcmp: %d\n", ft_strcmp(0,0));
	// printf("\nstrcmp: %d\n", strcmp(0,0));
}

void	test_3()
{
	printf("\nft_strlen 1: %ld\n", ft_strlen("hello!"));
	printf("\nft_strlen 2: %ld\n", ft_strlen(0));
	printf("\nft_strlen 3: %ld\n", ft_strlen(""));
	printf("\nft_strlen 4: %ld\n", ft_strlen("hello!jhkjfdhkshdfkjsdkjfkjsdfhksjhfk\
	jsdhkfjsdkjfhksdjsdhghjsdfhjsdfhsdhfsdfhjflsjflkjsdlkfjsldkjhskdjqskjdkjsqhkdjsqkjdhsqkjdhksqjdkjsqhdksqjhdkjsqhdk\
	sjdhkqjhdkjskjdqkjdkjsqdkjsqkjdsqkjhksqhdksqjhdkjqshkdjsqhkdjhkdhqskjdhqjdkqsdlkjqskjdksqjdlkjsqljdlksqjhqsh\
	flksdjlkfjsdlkjflks"));
}

void	test_2()
{
	ft_write(1,"\nhello\n",3);
	ft_write(1,"\nhello\n",7);
}

void	test_1()
{
	char *str = "hello\n";
	char *str2 = malloc(10);
	printf("\n%p\n%p\n",str,str2);
	printf("\n%s",ft_strcpy(str2,str));
	printf("%s\n",ft_strcpy(str2,"hi"));
}

int main()
{
	test_1();
	test_4();
	test_3();
	test_2();
	test_5();
	return (0);
}
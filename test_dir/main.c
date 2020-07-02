/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:21:20 by abarot            #+#    #+#             */
/*   Updated: 2020/07/02 13:23:06 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	test_5()
{
	char *str;
	str = ft_strdup("");
	printf("\nft_strdup empty string : %s\n", str);
	free(str);

	str = ft_strdup("sjlkdqjslkqljdjqsldjlsqkjdlksqj\
	kqmsldkmlqskdlshkjhfkjsdhfkjsdhkfjsdkfhqkdmlksqmlkmsdlkdmqks");
	printf("\nft_strdup very long string : %s\n", str);
	free(str);

	str = ft_strdup(0);
	printf("\nft_strdup zero: %s\n", str);
	free(str);
}

void	test_4()
{
	int i;
	int fd;
	char *buff;

	printf("\n----------------- First test : everything work---------------\n\n");

	buff = calloc(50,1);
	printf("\nCreating the file test.txt with write and read options\n");
	fd = open("./test.txt", O_RDWR|O_APPEND|O_CREAT, 0644);
	printf("Testing the write function with the string : testing the writting function on oppened file\n");
	i = ft_write(fd,"testing the writting function on oppened file\n", ft_strlen("testing the writting function on oppened file"));
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	close(fd);

	printf("\nTesting the read function on test.txt, 25 characters\n");
	fd = open("./test.txt", O_RDWR, 0644);
	i = ft_read(fd, buff, 25);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("Result of read : %s\n", buff);
	close(fd);
	free(buff);

	printf("\n----------------- Second test : bad file descriptor ---------------\n\n");

	buff = calloc(50,1);
	printf("\nOppening the file test.txt with read only option\n");
	fd = open("./test.txt", O_RDONLY, 0644);
	printf("Trying to write hello\n");
	i = ft_write(fd, "hello\n", 7);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("Result of read : %s\n", buff);
	close(fd);
	
	printf("\nOppening the file test.txt with write only option\n");
	fd = open("./test.txt", O_WRONLY, 0644);
	printf("Trying to read the file\n");
	i = ft_read(fd, buff, 10);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	close(fd);
	free(buff);

	printf("\n----------------- Third test : stdin/stdout ---------------\n\n");

	buff = calloc(50,1);
	
	printf("\nRead on the standard input\n");
	i = ft_read(0, buff, 100);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("Result of read : %s",buff);

	printf("\nWrite buffer of ft_read on the standard output\n");
	i = ft_write(1, buff, ft_strlen(buff));
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));

	free(buff);
}

void	test_3()
{
	printf("\nft_strcmp same string : %d\n", ft_strcmp("hello3","hello3"));
	printf("\nstrcmp same string : %d\n", strcmp("hello","hello"));
	printf("\nft_strcmp +1: %d\n", ft_strcmp("hello1","hello"));
	printf("\nstrcmp +1: %d\n", strcmp("hello1","hello"));
	printf("\nft_strcmp -1: %d\n", ft_strcmp("hello","hello1"));
	printf("\nstrcmp -1: %d\n", strcmp("hello","hello1"));
	printf("\nft_strcmp fisrt arg empty : %d\n", ft_strcmp("","hello1"));
	printf("\nstrcmp fisrt arg empty: %d\n", strcmp("","hello1"));
	printf("\nft_strcmp second arg empty : %d\n", ft_strcmp("hello",""));
	printf("\nstrcmp second arg empty: %d\n", strcmp("hello",""));
	// printf("\nft_strcmp: %d\n", ft_strcmp("aaa",0));
	// printf("\nstrcmp: %d\n", strcmp("aaa",0)); ==>segfault
	// printf("\nft_strcmp: %d\n", ft_strcmp(0,"aaa"));
	// printf("\nstrcmp: %d\n", strcmp(0,"aaa")); ==>segfault
	// printf("\nft_strcmp 0,0 arg: %d\n", ft_strcmp(0,0));
	// printf("\nstrcmp 0,0 arg: %d\n", strcmp(0,0)); ==> Werror
}

void	test_2()
{
	char *str = "hello\n";
	char *str2 = malloc(10);
	printf("\nString str to copy : str = %s, address : %p\n",str,str);
	printf("\nAddress str2 : %p\n",str2);
	printf("\nreturn value strcpy(str2, str) : %s", strcpy(str2,str));
	printf("\nChecking if str2 address hasn't changed : %p\n\n-------------------\n", str2);
	free(str2);

	str = "";
	str2 = malloc(10);
	printf("\nString str to copy (empty) : str = %s, address : %p\n",str,str);
	printf("\nAddress str2 : %p\n",str2);
	printf("\nreturn value strcpy(str2, str) : %s\n", strcpy(str2,str));
	printf("\nChecking if str2 address hasn't changed : %p\n\n-------------------\n", str2);
	free(str2);

	str = "hello!jhkjfdhkshdfkjsdkjfkjsdfhksjhfk\
	jsdhkfjsdkjfhksdjsdhghjsdfhjsdfhsdhfsdfhjflsjflkjsdlkfjsldkjhskdjqskjdkjsqhkdjsqkjdhsqkjdhksqjdkjsqhdksqjhdkjsqhdk\
	sjdhkqjhdkjskjdqkjdkjsqdkjsqkjdsqkjhksqhdksqjhdkjqshkdjsqhkdjhkdhqskjdhqjdkqsdlkjqskjdksqjdlkjsqljdlksqjhqsh\
	flksdjlkfjsdlkjflks";
	str2 = malloc(190);
	printf("\nString str to copy (very long) : str = %s, address : %p\n",str,str);
	printf("\nAddress str2 : %p\n",str2);
	printf("\nreturn value strcpy(str2, str) : %s\n", strcpy(str2,str));
	printf("\nChecking if str2 address hasn't changed : %p\n", str2);
	free(str2);
}

void	test_1()
{
	printf("\nft_strlen hello!: %ld\n", ft_strlen("hello!"));
	printf("\nft_strlen empty string : %ld\n", ft_strlen(""));
	printf("\nft_strlen long string : %ld\n", ft_strlen("hello!jhkjfdhkshdfkjsdkjfkjsdfhksjhfk\
	jsdhkfjsdkjfhksdjsdhghjsdfhjsdfhsdhfsdfhjflsjflkjsdlkfjsldkjhskdjqskjdkjsqhkdjsqkjdhsqkjdhksqjdkjsqhdksqjhdkjsqhdk\
	sjdhkqjhdkjskjdqkjdkjsqdkjsqkjdsqkjhksqhdksqjhdkjqshkdjsqhkdjhkdhqskjdhqjdkqsdlkjqskjdksqjdlkjsqljdlksqjhqsh\
	flksdjlkfjsdlkjflks"));
	printf("\nft_strlen 0: %ld\n", ft_strlen(0));
}

int main()
{
	printf("\n\n-----------test ft_strlen-----------\n\n");
	test_1();
	printf("\n\n------------test ft_strcpy------------\n\n");
	test_2();
	printf("\n\n------------test ft_strcmp------------\n\n");
	test_3();
	printf("\n\n------------test ft_write and ft_read------------\n\n");
	test_4();
	printf("\n\n------------test ft_strdup------------\n\n");
	test_5();
	return (0);
}
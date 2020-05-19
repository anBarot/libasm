#include "libasm.h"

void	test_6()
{
	char *str;
	str=ft_strdup("byebye");
	printf("\nft_strdup 1: %s\n", str);
	free(str);
	str=ft_strdup(0);
	printf("\nft_strdup 2: %s\n", str);
	free(str);
	str=ft_strdup("sjlkdqjslkqljdjqsldjlsqkjdlksqj\
	kqmsldkmlqskdlsqkdmlksqmlkmsdlkdmqks");
	printf("\nft_strdup 3: %s\n", str);
	free(str);
}

void	test_5()
{
	int		i;
	char	*buf;
	int		fd;

	buf = calloc(30,1);
	fd = open("srcs/ft_read.s", O_RDWR);
	i = ft_read(fd,buf,29);
	printf("\nRead srcs/ft_read.s, 29\nreturn value : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\nBuffer string :\n%s\n",buf);
	close(fd);
	free(buf);
	buf = calloc(20,1);
	i = ft_read(-1,buf,19);
	printf("\nRead fd = -1\nreturn value : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\nBuffer string :\n%s\n",buf);
	free(buf);
}

void	test_4()
{
	int i;

	i = ft_write(1,"\nhello\n",3);
	printf("\ni : %d\n",i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	i = ft_write(1,"\nhello",7);
	printf("\ni : %d\n\n",i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	i = ft_write(-1, 0, -1);
	printf("i : %d",i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	i = ft_write(-10, 0, 0);
	printf("i : %d",i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
}

void	test_3()
{
	printf("\nft_strcmp identique: %d\n", ft_strcmp("hello3","hello3"));
	printf("\nstrcmp identique: %d\n", strcmp("hello","hello"));
	printf("\nft_strcmp +1: %d\n", ft_strcmp("hello1","hello"));
	printf("\nstrcmp +1: %d\n", strcmp("hello1","hello"));
	printf("\nft_strcmp -1: %d\n", ft_strcmp("hello","hello1"));
	printf("\nstrcmp -1: %d\n", strcmp("hello","hello1"));
	// printf("\nft_strcmp: %d\n", ft_strcmp("aaa",0));
	// printf("\nstrcmp: %d\n", strcmp("aaa",0)); ==>segfault
	// printf("\nft_strcmp: %d\n", ft_strcmp(0,"aaa"));
	// printf("\nstrcmp: %d\n", strcmp(0,"aaa")); ==>segfault
	// printf("\nft_strcmp 0,0 arg: %d\n", ft_strcmp(0,0));
	// printf("\nstrcmp 0,0 arg: %d\n", strcmp(0,0));
}

void	test_2()
{
	char *str = "hello\n";
	char *str2 = malloc(10);
	printf("\nstr : %p\n",str);
	printf("\n%p : %s",str2, strcpy(str2,str));
	free(str2);
	str2 = malloc(10);
	printf("\n%s",ft_strcpy(str2,"hi"));
	free(str2);
	str2 = malloc(100);
	printf("\n%s",ft_strcpy(str2,"jskdhqskjdkdmsqlkdmlqskmdksqhsdnkqsndnsqlkdjlsqj\
	jsdlkqjskdjsqldjksqjdlsjdlksqjddkjsjh"));
	free(str2);
}

void	test_1()
{
	printf("\nft_strlen 1: %ld\n", ft_strlen("hello!"));
	printf("\nft_strlen 2: %ld\n", ft_strlen(0));
	printf("\nft_strlen 3: %ld\n", ft_strlen(""));
	printf("\nft_strlen 4: %ld\n", ft_strlen("hello!jhkjfdhkshdfkjsdkjfkjsdfhksjhfk\
	jsdhkfjsdkjfhksdjsdhghjsdfhjsdfhsdhfsdfhjflsjflkjsdlkfjsldkjhskdjqskjdkjsqhkdjsqkjdhsqkjdhksqjdkjsqhdksqjhdkjsqhdk\
	sjdhkqjhdkjskjdqkjdkjsqdkjsqkjdsqkjhksqhdksqjhdkjqshkdjsqhkdjhkdhqskjdhqjdkqsdlkjqskjdksqjdlkjsqljdlksqjhqsh\
	flksdjlkfjsdlkjflks"));
}

int main()
{
	printf("\n\n-----------test ft_strlen-----------\n\n");
	test_1();
	printf("\n\n------------test ft_strcpy------------\n\n");
	test_2();
	printf("\n\n------------test ft_strcmp------------\n\n");
	test_3();
	printf("\n\n------------test ft_write------------\n\n");
	test_4();
	printf("\n\n------------test ft_read------------\n\n");
	test_5();
	printf("\n\n------------test ft_strdup------------\n\n");
	test_6();
	return (0);
}
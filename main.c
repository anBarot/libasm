#include "lib.h"

void	test_6()
{
	printf("\nft_strdup 1: %s\n", ft_strdup("byebye"));
	printf("\nft_strdup 2: %s\n", ft_strdup(0));
	printf("\nft_strdup 3: %s\n", ft_strdup("sjlkdqjslkqljdjqsldjlsqkjdlksqj\
	kqmsldkmlqskdlsqkdmlksqmlkmsdlkdmqks"));
}

void	test_5()
{
	int		i;
	char	*buf;
	int		fd;

	buf = malloc(10);
	fd = open("Makefile", O_RDWR);
	i = ft_read(fd,buf,10);
	printf("i : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\n%d : %s\n",i,buf);
	close(fd);
	free(buf);
	fd = open("Makefiles", O_RDWR);
	buf = malloc(20);
	i = ft_read(fd,buf,20);
	printf("i : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\n%d : %s\n",i,buf);
	close(fd);
	free(buf);
	fd = open("Makefile", O_WRONLY);
	buf = malloc(20);
	i = ft_read(fd,buf,20);
	printf("i : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\n%d : %s\n",i,buf);
	close(fd);
	free(buf);
	buf = malloc(10);
	fd = open("Makefile", O_RDWR);
	i = ft_read(fd,buf,40);
	printf("i : %d", i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
	else
		printf("\n%d : %s\n",i,buf);
	close(fd);
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
	i = ft_write(-1, 0, 0);
	printf("i : %d",i);
	if (i < 0)
		printf("\nerror %d: %s\n", errno, strerror(errno));
}

void	test_3()
{
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello"));
	printf("\nstrcmp: %d\n", strcmp("hello","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello1","hello"));
	printf("\nstrcmp: %d\n", strcmp("hello1","hello"));
	printf("\nft_strcmp: %d\n", ft_strcmp("hello","hello1"));
	printf("\nstrcmp: %d\n", strcmp("hello","hello1"));
	printf("\nft_strcmp: %d\n", ft_strcmp("aaa",0));
	// printf("\nstrcmp: %d\n", strcmp("aaa",0)); ==>segfault
	printf("\nft_strcmp: %d\n", ft_strcmp(0,"aaa"));
	// printf("\nstrcmp: %d\n", strcmp(0,"aaa")); ==>segfault
	printf("\nft_strcmp: %d\n", ft_strcmp(0,0));
	printf("\nstrcmp: %d\n", strcmp(0,0));
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
	// printf("\n\n-----------test ft_strlen-----------\n\n");
	// test_1();
	// printf("\n\n------------test ft_strcpy------------\n\n");
	// test_2();
	// printf("\n\n------------test ft_strcmp------------\n\n");
	// test_3();
	printf("\n\n------------test ft_write------------\n\n");
	test_4();
	printf("\n\n------------test ft_read------------\n\n");
	test_5();
	// printf("\n\n------------test ft_strdup------------\n\n");
	// test_6();
	return (0);
}
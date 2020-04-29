#include <stdio.h>
#include "lib.h"

int main()
{
	char *buff = calloc(10,1);

	ft_read(0,	buff, 5);
	printf("\nresult : %s\n",buff);
	return (0);
}
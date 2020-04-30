#ifndef	LIB_H
# define LIB_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

size_t 	ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char 	*ft_strcpy(char *dest, const char *src);
int 	ft_strcmp(const char *s1, const char *s2);
char 	*ft_strdup(const char *s);
#endif
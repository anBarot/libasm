#ifndef	LIB_H
# define LIB_H
# include <unistd.h>

size_t 	ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
#endif
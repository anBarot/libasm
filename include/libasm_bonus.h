#ifndef	LIBASM_BONUS_H
# define LIBASM_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include "libasm.h"

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int					ft_strchr(char *str, char c);
int					ft_atoi_base(char *str, char *base);
void				ft_list_push_front(t_list **begin_list, void *data);
int					ft_list_size(t_list *begin_list);
#endif
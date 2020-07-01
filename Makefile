# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/07/01 15:18:08 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

OS := $(shell uname)

OBJS	= objs/ft_strlen.o objs/ft_write.o objs/ft_read.o objs/ft_strcpy.o \
			objs/ft_strcmp.o objs/ft_strdup.o

OBJS_BONUS	= objs/ft_atoi_base.o objs/ft_list_push_front.o objs/ft_list_size.o \
				objs/ft_strchr.o

RM		= rm -rf

all	:	
		make $(NAME)

$(NAME) :	
ifeq ($(OS),Linux)
	make -C linux 
else
	make -C macos 
endif

bonus	:
ifeq ($(OS),Linux)
	make -C linux bonus
else
	make -C macos bonus
endif

test	:	$(NAME)
			./test_dir/run_test.sh && ./test && rm test

test_bonus : 
			make bonus
			./test_dir/run_bonus.sh && ./test_bonus && rm test_bonus

clean	:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean	:	clean
			$(RM) $(NAME) test 

re		:	fclean 
			make all
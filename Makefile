# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/07/02 13:40:30 by abarot           ###   ########.fr        #
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

test	:	re
			./test_dir/run_test.sh 
			touch result.txt
			chmod 755 result.txt
			./test > result.txt
			rm test 

test_bonus : fclean
			make bonus
			./test_dir/run_bonus.sh
			touch result_bonus.txt
			chmod 755 result_bonus.txt
			./test_bonus > result_bonus.txt
			rm test_bonus

clean	:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean	:	clean
			$(RM) $(NAME) test test.txt result.txt result_bonus.txt test_bonus test

re		:	fclean 
			make all
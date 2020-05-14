# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/05/14 15:22:20 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

SRCS	= srcs/ft_strlen.s srcs/ft_write.s srcs/ft_read.s srcs/ft_strcpy.s \
			srcs/ft_strcmp.s srcs/ft_strdup.s

OBJS	= $(SRCS:.s=.o)

SRCS_BONUS	= bonus/ft_atoi_base.s bonus/ft_list_push_front.s bonus/ft_list_size.s \
				bonus/ft_list_sort.s bonus/ft_list_remove_if.s bonus/ft_strchr.s

OBJS_BONUS	= $(SRCS_BONUS:.s=.o)

INCLUDE	= include

CFLAGS	= -Wall -Wextra -Werror -no-pie -fsanitize=address

RM		= rm -rf

%.o	:	%.s
		nasm -f elf64 $<

all	:
		make $(NAME)

$(NAME) :	$(OBJS)
			ar -rc $@ $(OBJS) 
			ranlib $@
			gcc $(CFLAGS) main.c libasm.a -I$(INCLUDE) -o test

bonus	:	$(OBJS_BONUS) $(OBJS)
			ar -rc $(NAME) $(OBJS) $(OBJS_BONUS)
			ranlib $(NAME)
			gcc $(CFLAGS) main_bonus.c libasm.a -I$(INCLUDE) -o test_bonus

clean	:
			$(RM) $(OBJS) $(OBJS_BONUS) 

fclean	:	clean
			$(RM) $(NAME) test test_bonus

re		:	fclean 
			make all

me		:	re 
			make clean
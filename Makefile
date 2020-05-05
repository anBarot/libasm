# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/05/05 12:05:02 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

SRCS	= srcs/ft_strlen.s srcs/ft_write.s srcs/ft_read.s srcs/ft_strcpy.s \
			srcs/ft_strcmp.s srcs/ft_strdup.s

OBJS	= $(SRCS:.s=.o)

INCLUDE	= include

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

all	:
		make $(NAME)

$(NAME) :
			nasm -f elf64 srcs/ft_strlen.s
			nasm -f elf64 srcs/ft_write.s
			nasm -f elf64 srcs/ft_read.s
			nasm -f elf64 srcs/ft_strcpy.s
			nasm -f elf64 srcs/ft_strcmp.s
			nasm -f elf64 srcs/ft_strdup.s
			ar -rc $@ $(OBJS) 
			ranlib $@
			gcc -no-pie -fsanitize=address main.c libasm.a -I$(INCLUDE)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean 
			make all

me		:	fclean	
			make all 
			make clean
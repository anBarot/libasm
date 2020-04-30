# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/04/30 16:44:07 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

SRCS	= ft_strlen.s ft_write.s ft_read.s ft_strcpy.s ft_strcmp.s ft_strdup.s

OBJS	= $(SRCS:.s=.o)

RM		= rm -rf

all	:
		make $(NAME)

$(NAME) :
			nasm -f elf64 ft_strlen.s
			nasm -f elf64 ft_write.s
			nasm -f elf64 ft_read.s
			nasm -f elf64 ft_strcpy.s
			nasm -f elf64 ft_strcmp.s
			nasm -f elf64 ft_strdup.s
			ar -rc $@ $(OBJS) 
			ranlib $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean 
			make all

me		:	fclean	
			make all 
			make clean
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 12:07:56 by abarot            #+#    #+#              #
#    Updated: 2020/07/02 10:28:25 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ../libasm.a

NASM	= nasm -f macho64

SRCS	= srcs/ft_strlen.s srcs/ft_write.s srcs/ft_read.s srcs/ft_strcpy.s \
			srcs/ft_strcmp.s srcs/ft_strdup.s

OBJS	= $(SRCS:.s=.o)

SRCS_BONUS	= bonus/ft_atoi_base.s bonus/ft_list_push_front.s bonus/ft_list_size.s \
				bonus/ft_strchr.s

OBJS_BONUS	= $(SRCS_BONUS:.s=.o)

INCLUDE	= ../include

%.o	:	%.s
		$(NASM) $<

all	:	
		make $(NAME)

$(NAME) :	$(OBJS)
			ar -rc $@ $(OBJS) 
			ranlib $@
			mv $(OBJS) ../objs/.

bonus	:	$(OBJS_BONUS) $(OBJS)
			ar -rc $(NAME) $(OBJS) $(OBJS_BONUS)
			ranlib $(NAME)
			mv $(OBJS_BONUS) ../objs/.
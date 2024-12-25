# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 14:03:40 by alparola          #+#    #+#              #
#    Updated: 2024/12/20 18:00:57 by alparola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
SRCS_DIR	=	srcs/
INCS_DIR	=	includes/
SRCS		=	ft_putchar.c \
		       	ft_putstr.c \
		       	ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c	
#INCS		=	libft.h
#INCS		:=	$(addprefix $(INCS_DIR), $(INCS))
SRCS		:=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJS		=	$(SRCS:.c=.o)

CC		=	gcc
CCFLAGS		=	-g -fsanitize=address -Wall -Werror -Wextra -std=c89
LDFLAGS		=	$(CCFLAGS)

all:		$(OBJS)
		@mkdir -p srcs includes
		@#$(CC) $(CCFLAGS) -I$(INCS_DIR) $(SRCS)
		ar rcs $(NAME) $(OBJS)
re:

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

Phony: all re clean fclean

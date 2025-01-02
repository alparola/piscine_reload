# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 14:03:40 by alparola          #+#    #+#              #
#    Updated: 2024/12/30 16:18:37 by alparola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
SRCS_DIR	=	srcs/
INCS_DIR	=	includes/
SRCS		=	main.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_strlen.c	
#INCS		=	libft.h
#INCS		:=	$(addprefix $(INCS_DIR), $(INCS))
SRCS		:=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJS		=	$(SRCS:.c=.o)

CC		=	cc
CCFLAGS		=	-Wall -Werror -Wextra
LDFLAGS		=	$(CCFLAGS)

all:		$(OBJS)
		$(CC) $(CCFLAGS) -I$(INCS_DIR) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

Phony: all clean fclean

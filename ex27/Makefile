# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 14:03:40 by alparola          #+#    #+#              #
#    Updated: 2024/12/20 22:14:49 by alparola         ###   ########.fr        #
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

CC		=	gcc
CCFLAGS		=	-g -fsanitize=address -Wall -Werror -Wextra -std=c89
LDFLAGS		=	$(CCFLAGS)

all:		$(OBJS)
		@mkdir -p srcs includes
		$(CC) $(CCFLAGS) -I$(INCS_DIR) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

Phony: all clean fclean

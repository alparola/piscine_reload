# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 11:08:19 by alparola          #+#    #+#              #
#    Updated: 2024/12/20 20:58:02 by alparola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c \
		ex14/ft_sqrt.c \
		ex20/ft_strdup.c \
		ex21/ft_range.c \
		ex25/ft_foreach.c
OBJS	=	$(SRCS:.c=.o)
INCS	=	-I. -Iex24/includes/
LIBS	=	-L./ex24/ -lft -lm
CCFLAGS =	-g -fsanitize=address
LDFLAGS =	$(CCFLAGS)

all:	$(OBJS)
	gcc $(CCFLAGS) $(INCS) -lm  -o test $(OBJS)
	make -C ex24
	gcc test24.c $(INCS) $(LIBS) -o test24

re:	fclean all

test:	re
		./test | less

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf test
	rm -rf test24
	make -C ex24 fclean
	find . \( -name "*~" -o -name "a.out" \) -delete

test:	re
	./test

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:39:40 by vsyutkin          #+#    #+#              #
#    Updated: 2023/09/12 14:44:26 by vsyutkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

DIR_SRC = ./srcs/

SRCS = 

OBJS = $(SRCS:.c=.o)

RM = rm -f

CFLAGS =  -Wall -Wextra -Werror

.c.o: 
	gcc $(CFLAGS) -c -I ./includes/ $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
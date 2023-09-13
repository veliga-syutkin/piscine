# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 19:42:55 by vsyutkin          #+#    #+#              #
#    Updated: 2023/09/08 03:14:00 by vsyutkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ft_putchar.c, ft_swap.c, ft_putstr.c, ft_strlen.c, ft_strcmp.c

CC = gcc
CFLAGS =  -Wall -Wextra -Werror
DIR = srcs
TARGET = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = ${addprefix $(DIR)/,$(TARGET)}
HEAD = includes/ft.h
FILES = $(HEAD) $(SRC)
OBJECTS = $(SRC:.c=.o)
EXECUTABLE = libft.a

#Default rule
all: $(EXECUTABLE)

#Library compiling
$(EXECUTABLE): $(OBJECTS)
	ar rc $(EXECUTABLE) $(OBJECTS)
	ranlib $(EXECUTABLE)

#Rule for generating *.o
$(TARGET:.c=.o): $(TARGET)
	$(CC) $(CFLAGS) -o $@ -c $<

#Remove *.c and lib
clean: 
	rm -f $(OBJECTS)

#Remove *.o, lib and the program
fclean: clean 
	rm -f $(EXECUTABLE)

#Complete recompilation
re: fclean all

.PHONY: all clean fclean re

# @command will show the command in Terminal
# we don't compile an program in tis Makefile, so we need yet ft.h.
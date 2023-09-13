# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 19:26:18 by vsyutkin          #+#    #+#              #
#    Updated: 2023/09/10 19:02:50 by vsyutkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS =  -Wall -Wextra -Werror
DIR = srcs
MAIN = main.c
TARGET = conversion.c rush.c ft_putchar.c ft_putstr.c ft_strlen.c ft_str_is_numeric.c ft_str_is_zero.c
#SRC = ${addprefix $(DIR)/,$(TARGET)} $(DIR)/main.c
SRC = $(MAIN) $(TARGET)
OBJECTS = $(SRC:.c=.o)
EXECUTABLE = rush-02

all: $(EXECUTABLE)

# $(EXECUTABLE): $(OBJECTS)
#	$(CC) $(CFLAGS) -o $@ $^

#$(OBJECTS): $(SRC)
#	$(CC) $(CFLAGS) -o $@ -c $<

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

#Remove *.o and lib
clean: 
	rm -f $(OBJECTS)

#Remove *.o, lib and the program
fclean: clean 
	rm -f $(EXECUTABLE)

#Complete recompilation
re: fclean all

.PHONY: all clean fclean re
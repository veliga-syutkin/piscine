NAME = rush-01

SRCS = ft_check_before.c \
	   ft_create_grid.c \
	   ft_get_entries.c \
	   ft_is_possible.c \
	   ft_print_grid.c \
	   ft_visibility_calculations.c \
	   ft_visibility_from_down.c \
	   ft_visibility_from_up.c \
	   ft_visibility_from_left.c \
	   ft_visibility_from_right.c \
	   main.c

OBJS = $(SRCS:.c=.o)

CC = cc -Wall -Wextra -Werror

INCLUDES = -I./

%.o: %.c
	$(CC) $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

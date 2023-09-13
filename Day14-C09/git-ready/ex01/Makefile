SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

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
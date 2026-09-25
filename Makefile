NAME = libftprintf.a

LIBFT = ../libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
      ft_putchar.c\
      ft_putstr.c\
      ft_putnbr.c\
      ft_putnbrh.c\
      ft_putnbrunsign.c\
      ft_putpointerh.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	$(MAKE) -C ../libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

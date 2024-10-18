CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iincludes -c
SOURCEFILES=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS=$(patsubst srcs/%.c,srcs/%.o,$(SOURCEFILES))
TARGET=libft.a

all: $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	ar -rcs libft.a $(OBJECTS)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f libft.a

re: fclean all

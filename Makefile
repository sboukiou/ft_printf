CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
SOURCES = printf.c parser.c handler.c printers.c print_integer.c ft_utils.c
OBJECTS := $(SOURCES:%.c=%.o)
LIB = ./libft
LIBSRC = ./libft/*.c
AR = ar -rcs

$(NAME): $(OBJECTS) liball
	cp libft/*.o .
	$(AR) $(NAME) $(OBJECTS) *.o

all: $(NAME)

%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS) main *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: all




liball: $(LIB)
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean


main: main.c printf.c
	$(CC) $(CFLAGS) main.c $(SOURCES) -L. ./libft/libft.a -o main

test:
	$(CC) $(CFLAGS) $(TEST) -L. $(NAME) -L. ./libft/libft.a -o main



.PHONY: all clean fclean re liball libclean libcleanall main

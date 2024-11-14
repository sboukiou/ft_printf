CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
SOURCES = printf.c
OBJECTS := $(SOURCES:%.c=%.o)
LIB = ./libft

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

liball: $(LIB)
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean

%.o: %.c
	$(CC) -c $(CFLAGS) $> -o $@

main: main.c printf.c
	$(CC) $(CFLAGS) main.c printf.c -L. ./libft/libft.a -o main


re: fclean all
.PHONY: all clean fclean re liball libclean libcleanall

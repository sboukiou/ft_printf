CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
SOURCES = printf_bonus.c parser.c tokenizer.c printers.c print_integer.c ft_utils.c
OBJECTS := $(SOURCES:%.c=%.o)
MAN_SRC=mandatory_printers.c printers.c ft_utils.c
MAN_OBJ=$(MAN_SRC:%.c=%.o)
LIB_OBJS = ./libft/*.o
LIB = ./libft
LIBSRC = ./libft/*.c
AR = ar -rcs

$(NAME): $(MAN_OBJ) liball
	$(AR) $(NAME) $(MAN_OBJ) $(LIB_OBJS)
	make clean

all: $(NAME)

%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS) $(LIB_OBJS) main a.out

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJECTS) liball
	$(AR) $(NAME) $(OBJECTS) $(LIB_OBJS)
	make clean


liball:
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean


main: main.c printf.c
	$(CC) $(CFLAGS) main.c $(SOURCES) -L. ./libft/libft.a -o main

test:
	$(CC) $(CFLAGS) $(TEST) -L. $(NAME) -L. ./libft/libft.a -o main



.PHONY: all clean fclean re liball libclean libcleanall main $(NAME)

# Commands or FU expressions
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
LIB = ./libft
LIB_A = ./libft/libft.a
AR = ar -rcs

# FILES  for printf bonus
SOURCES = printf_bonus.c parser.c tokenizer.c printers.c print_integer_bonus.c ft_utils.c print_hex_address.c print_char_bonus.c print_string_bonus.c
OBJECTS := $(SOURCES:%.c=%.o)

# FILES for printf mand
MAN_SRC=mandatory_printers.c printers.c ft_utils.c
MAN_OBJ=$(MAN_SRC:%.c=%.o)

# FILES for libft deps
LIB_SRCS= $(LIB)/*.c
LIB_OBJS = $(LIB_SRCS:%.c=%.o)

# NAME --> libftprintf.a
$(NAME): $(MAN_OBJ) $(LIB_OBJS)
	$(RM) printf_bonus.o
	make liball
	$(AR) $(NAME) $(MAN_OBJ) $(LIB_OBJS)

# All rule
all: $(NAME)

# Create objects from sources
%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

# Clean --> remove obj files
clean:
	$(RM) $(MAN_OBJ) $(OBJECTS) $(LIB_OBJS) main a.out

# Fclean --> clean + rm $(NAME)
fclean: clean
	$(RM) $(NAME)

# Re --> Recreate $(NAME)
re: fclean all

bonus: $(OBJECTS) $(LIB_OBJS)
	$(RM) mandatory_printers.o
	make liball
	$(AR) $(NAME) $(OBJECTS) $(LIB_OBJS)


# LIBFT make rules
liball:
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean


# Testing targets
main: main.c printf.c
	$(CC) $(CFLAGS) main.c $(SOURCES) -L. ./libft/libft.a -o main
test:
	$(CC) $(CFLAGS) $(TEST) -L. $(NAME) -L. ./libft/libft.a -o main



# Execute as rules only
.PHONY: all clean fclean re liball libclean libcleanall main $(NAME)

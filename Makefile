# Commands or FF expressions
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
LIB = ./libft
LIB_A = ./libft/libft.a
AR = ar -rcs

# FILES  for printf bonus
SOURCES = printf_bonus.c parser.c tokenizer.c printers.c print_integer_bonus.c ft_utils.c ft_utils_2.c print_hex_bonus.c print_char_bonus.c print_string_bonus.c print_address_bonus.c print_unsigned_bonus.c
OBJECTS := $(SOURCES:%.c=%.o)

# FILES for libft deps
LIB_SRCS= $(LIB)/*.c
LIB_OBJS = $(LIB_SRCS:%.c=%.o)


(NAME): $(OBJECTS) $(LIB_OBJS)
	@make liball
	@$(AR) $(NAME) $(OBJECTS) $(LIB_OBJS)

# All rule
all: $(NAME)

# Create objects from sources
%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

# Clean --> remove obj files
clean:
	@$(RM) $(OBJECTS) $(LIB_OBJS)

# Fclean --> clean + rm $(NAME)
fclean: clean libcleanall
	@$(RM) $(NAME)

# Re --> Recreate $(NAME)
re: fclean all

bonus: $(NAME)

# LIBFT make rules
liball:
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean


# Execute as rules only
.PHONY: all clean fclean re liball libclean libcleanall $(NAME)

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = 	libftprintf.a
LIB = ./libft
LIB_A = ./libft/libft.a
AR = ar -rcs

SOURCES = printf.c parser.c tokenizer.c printers.c print_integer_bonus.c ft_utils.c ft_utils_2.c print_hex_bonus.c print_char_bonus.c print_string_bonus.c print_address_bonus.c print_unsigned_bonus.c
OBJECTS := $(SOURCES:%.c=%.o)

LIB_SRCS= $(LIB)/*.c
LIB_OBJS = $(LIB_SRCS:%.c=%.o)


$(NAME): $(OBJECTS) $(LIB_OBJS)
	@make liball
	@$(AR) $(NAME) $(OBJECTS) $(LIB_OBJS)

all: $(NAME)

%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

clean:
	@$(RM) $(OBJECTS) $(LIB_OBJS)

fclean: clean libcleanall
	@$(RM) $(NAME)

re: fclean all

bonus: $(NAME)

liball:
	@cd $(LIB) && make && make bonus
libcleanall:
	@cd $(LIB) && make fclean

libclean:
	@cd $(LIB) && make clean


.PHONY: all clean fclean re liball libclean libcleanall

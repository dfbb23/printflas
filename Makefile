NAME = libftprintf.a

SRC = ft_putcharr.c  ft_putexxa.c  ft_putnbrU.c  ft_putexxxa.c\
ft_putexa.c    ft_putnbr.c   ft_putstr.c ft_printf1.c

OBJ = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Rules for compiling object files
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild all
re: fclean all

# Default target
all: $(NAME)

.PHONY : all clean fclean re

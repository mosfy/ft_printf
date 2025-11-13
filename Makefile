NAME = libftprintf.a
TEST = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

TEST_OBJ = main.o

HEADER = ft_printf.h

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(TEST): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) $(NAME) -o $(TEST)

test: $(TEST)
	./$(TEST)

clean:
	rm -f $(OBJ) $(TEST_OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(TEST)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

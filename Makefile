NAME = libft.a
TEST = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =
BONUS = 

TEST_OBJ = main.o

HEADER = libft.h

all: $(NAME)

$(NAME): $(SRC)
	ar rcs $(NAME) $(SRC)

bonus: $(SRC) $(BONUS)
	ar rcs $(NAME) $(SRC) $(BONUS)

$(TEST): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lft -o $(TEST)
test: all bonus $(TEST)
	./$(TEST)
clean:
	rm -f $(SRC) $(BONUS) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all
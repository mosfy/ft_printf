NAME = libft.a
TEST = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
      ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o \
      ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o \
      ft_atoi.o ft_calloc.o ft_strdup.o ft_strnstr.o ft_substr.o \
      ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strlcat.o \
      ft_strlcpy.o ft_toupper.o ft_tolower.o ft_strmapi.o ft_striteri.o \
      ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

BONUS = ft_lstadd_front.o ft_lstnew.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o \
        ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

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
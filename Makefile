NAME = libft.a
SRCS = ft_isalpha.c
OBJ = $(SRCS:.c=.o)
INCLUDES = libft.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %c
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
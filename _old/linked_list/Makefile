NAME = linked_list

SRC = linked_list.c \
		main1.c \

OBJ = $(SRC:.c=.o)

CC = cc -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
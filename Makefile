NAME = push_swap

SRCS = push_swap.c \
	list.c \
	node.c \
	sort_op.c \

OBJS = $(SRCS:.c=.o)

CC = cc -g -Wall -Wextra -Werror

INC = -Ilibft -Llibft -lft \

LIBFT = libft/libft.a

all: $(NAME)

$(LIBFT):
	cd libft && $(MAKE)

%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) $(INC) -o $(NAME)

clean:
	rm -f $(OBJS)
	cd libft && $(MAKE) clean
	
fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all libft clean fclean re

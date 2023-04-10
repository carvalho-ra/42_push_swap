NAME = push_swap

SRCS = push_swap.c \

OBJS = $(SRCS:.c=.o)

CC = cc -Wall -Wextra -Werror

INC = -Ilibft -Llibft -lft \
		-Imlx -Lmlx -lmlx -framework OpenGL -framework AppKit

#LIBFT = libft/libft.a

#MLX = mlx/libmlx.a

all: $(NAME)

$(LIBFT):
	cd libft && $(MAKE)

$(MLX): 
	cd mlx && $(MAKE)

%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	$(CC) $(OBJS) $(INC) -o $(NAME)

clean:
	rm -f $(OBJS)
	cd libft && $(MAKE) clean
	
fclean: clean
	$(RM) $(NAME) $(LIBFT)
	cd mlx && $(MAKE) clean

re: fclean all

.PHONY: all bonus libft clean fclean re

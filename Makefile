CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

BONUS = checker

SRCS = srcs/*.c utils/*.c instructions/*.c

BONUS_SRCS = bonus/*.c utils/*.c instructions/*.c get_next_line/*.c

LIBFT = libft.a

all: $(LIBFT) $(NAME)

bonus : $(LIBFT) $(BONUS)

$(LIBFT):
	make -C libft
	make -C libft bonus

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) libft/$(LIBFT) -o $@

$(BONUS): $(BONUS_SRCS)
	$(CC) $(FLAGS) -DBUFFER_SIZE=1 $(BONUS_SRCS) libft/$(LIBFT) -o $@

re: fclean all

fclean: clean
	rm -f $(NAME) $(BONUS)
	make -C libft fclean

clean:
	make -C libft clean

.PHONY: all clean fclaen re bonus
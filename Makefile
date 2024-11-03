NAME = push_swap
LIBFT = libft.a

LIBFT_PATH = ./libft/

SRC =	$(ALGO) \
		list_instructions.c \
		push_swap_instructions_s.c \
		push_swap_instructions_p.c \
		push_swap_instructions_r.c \
		push_swap_instructions_rr.c \
		push_swap_utils.c \
		init_list_ab.c  \
		main.c

ALGO =	selection_sort.c \
		quick_sort.c

CC = gcc
FLAGS = -Wall -Wextra -Werror -g -fsanitize=address 
RM = rm -f
OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h 


all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) -L $(LIBFT_PATH) -lft
	@echo "Compilation done"

$(LIBFT):
	@make -C $(LIBFT_PATH)
	@echo "LIBFT created"

%.o: %.c
	@$(CC) $(FLAGS) -c -o $@ $<

clean: 
	@$(MAKE) -C $(LIBFT_PATH) clean > /dev/null 2>&1
	@$(RM) $(OBJ) > /dev/null 2>&1
	@echo "Clean done"

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean > /dev/null 2>&1
	@$(RM) $(NAME) > /dev/null 2>&1
	@echo "Fclean done"

re: fclean all

.PHONY: clean all re fclean


# Compiler and flags

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories

SRC_DIR = src/
OBJ_DIR = obj/
INCLUDE_DIR = include/
LIBFT_DIR = libft/

# Files

SRCS = functions.c push_swap.c utils.c call_algorithm.c small_stack_algorithm.c \
			 radix_algo.c pushes.c rotates.c reverse_rotates.c swaps.c stack_preparation.c
OBJS = $(SRCS:%.c=$(OBJ_DIR)%.o)
DEPS = $(OBJS:%.o=%.d)
INCLUDES = -I$(INCLUDE_DIR) -I$(LIBFT_DIR)
LIBFT = $(LIBFT_DIR)libft.a

NAME = push_swap

all: $(NAME)

libs:
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) | libs
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -MMD -MP -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

-include $(DEPS)

.PHONY: all libs fclean clean re

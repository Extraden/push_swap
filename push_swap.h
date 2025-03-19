#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_data
{
	int		number;
	struct s_node	*next;
} t_data;

typedef struct	s_stack
{
	int	*nums;
	int	size;
} t_stack;

#endif
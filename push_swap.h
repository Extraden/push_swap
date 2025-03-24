#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stack
{
	int	*nums;
	int	tmp;
	int	length;
	int	size;
} t_stack;
typedef struct	s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
} t_data;

#endif
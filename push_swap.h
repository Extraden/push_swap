#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef enum	e_result {
	SUCCESS = 0,
	FAILURE = 1,
} 				t_result;

typedef struct	s_stack
{
	int	*nums;
	int	length;
	int	capacity;
	char letter;
} t_stack;

typedef struct	s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
} t_data;

void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *from, t_stack *to);

#endif
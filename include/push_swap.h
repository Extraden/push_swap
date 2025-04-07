#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>

typedef enum	e_result {
	SUCCESS = 0,
	FAILURE = 1,
} 				t_result;

typedef struct	s_stack
{
	int	*nums;
	size_t	length;
	size_t	capacity;
} t_stack;

typedef struct	s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
} t_data;

t_result	ft_atoi_checked(const char *nptr, int *num);
void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *from, t_stack *to);
void  print_stacks(t_data *data);
void  sa(t_data *data);
void  sb(t_data *data);
void  ss(t_data *data);
void  ra(t_data *data);
void  rb(t_data *data);
void  rr(t_data *data);
void  rra(t_data *data);
void  rrb(t_data *data);
void  rrr(t_data *data);
void  pa(t_data *data);
void  pb(t_data *data);
void  radix_algo(t_data *data);
t_result	create_indices(t_stack *stack);
t_result	stack_init(t_stack *stack, int capacity);

#endif

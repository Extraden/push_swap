#include "push_swap.h"

void	rotate(t_stack *stack)
{
	stack->tmp = stack->nums[0];
	ft_memmove(&stack->nums[0], &stack->nums[1], stack->size);
	stack->nums[stack->length - 1]
}
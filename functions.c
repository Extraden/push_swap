#include "push_swap.h"
#include "libft.h"

void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->length < 2)
		return;
	tmp = stack->nums[0];
	stack->nums[0] = stack->nums[1];
	stack->nums[1] = tmp;
}

void	rotate(t_stack *stack)
{
	int	tmp;

	if (stack->length < 2)
		return;
	tmp = stack->nums[0];
	ft_memmove(&stack->nums[0], &stack->nums[1], stack->size - sizeof(int));
	stack->nums[stack->length - 1] = tmp;
}

void	reverse_rotate(t_stack *stack)
{
	int	tmp;

	if (stack->length < 2)
		return;
	tmp = stack->nums[stack->length - 1];
	ft_memmove(&stack->nums[1], &stack->nums[0], stack->size - sizeof(int));
	stack->nums[0] = tmp;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:11:42 by dsemenov          #+#    #+#             */
/*   Updated: 2025/03/31 19:06:46 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	push(t_stack *from, t_stack *to)
{
	if (from->length == 0)
		return;
	ft_memmove(&to->nums[1], &to->nums[0], to->capacity * sizeof(int)- sizeof(int));
	to->nums[0] = from->nums[0];
	to->length++;
	ft_memmove(&from->nums[0], &from->nums[1], from->capacity *sizeof(int)- sizeof(int));
	from->length--;
}

void	rotate(t_stack *stack)
{
	int	tmp;

	if (stack->length < 2)
		return;
	tmp = stack->nums[0];
	ft_memmove(&stack->nums[0], &stack->nums[1], stack->capacity - sizeof(int));
	stack->nums[stack->length - 1] = tmp;
}

void	reverse_rotate(t_stack *stack)
{
	int	tmp;

	if (stack->length < 2)
		return;
	tmp = stack->nums[stack->length - 1];
	ft_memmove(&stack->nums[1], &stack->nums[0], stack->capacity - sizeof(int));
	stack->nums[0] = tmp;
}

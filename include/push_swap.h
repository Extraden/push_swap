/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:17:28 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/16 15:09:41 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>

typedef enum e_result
{
	SUCCESS = 0,
	FAILURE = 1,
}			t_result;

typedef struct s_stack
{
	int		*nums;
	size_t	length;
}			t_stack;

typedef struct s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
}			t_data;

t_result	ft_atoi_checked(const char *nptr, int *num);
void		swap(t_stack *stack);
void		rotate(t_stack *stack);
void		reverse_rotate(t_stack *stack);
void		push(t_stack *from, t_stack *to);
void		sa(t_data *data);
void		sb(t_data *data);
void		ra(t_data *data);
void		rb(t_data *data);
void		rra(t_data *data);
void		pa(t_data *data);
void		pb(t_data *data);
void		radix_algo(t_data *data);
t_result	create_indices(t_stack *stack);
t_result	stack_init(t_stack *stack, int length);
t_result	is_sorted(t_stack *stack);
void		call_algorithm(t_data *data);
void		sort_small_stack(t_data *data);
void		push_all_to_a(t_data *data);
void		free_stacks(t_data *data);

#endif

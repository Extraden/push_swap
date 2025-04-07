/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemenov <dsemenov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:11:11 by dsemenov          #+#    #+#             */
/*   Updated: 2025/04/07 09:25:36 by dsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>
#include <stdio.h>

void  print_stacks(t_data *data)
{
	size_t i;

	printf("\n\n");
	printf("Stack a: ");
	i = 0;
	while (i < data->stack_a.length)
	{
		printf("%d ", data->stack_a.nums[i]);
		i++;
	}
	printf("\n");

	printf("Length of stack: %zu\n", data->stack_a.length);
	printf("\n");
	printf("Stack b: ");
	i = 0;
	while (i < data->stack_b.length)
	{
		printf("%d ", data->stack_b.nums[i]);
		i++;
	}
	printf("\n");

	printf("Length of stack: %zu\n", data->stack_b.length);
	printf("\n");
	printf("------------------------------------------------------------\n\n");

}

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	data;
	t_stack	stack;
	int		i;

	data.stack_a.length = argc - 1;
	data.stack_a.size = data.stack_a.length * (sizeof(int));
	data.stack_a.nums = malloc(data.stack_a.size);
	i = 0;
	while (i < data.stack_a.length)
	{
		data.stack_a.nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < data.stack_a.length)
	{
		printf("%d ", data.stack_a.nums[i]);
		i++;
	}
	printf("Size of stack a: %d\n", data.stack_a.length);

	i = 0;
	while (i < data.stack_a.length - 1)
	{
		swap(&data.stack_a);
		i++;
	}

	i = 0;
	while (i < data.stack_a.length)
	{
		printf("%d ", data.stack_a.nums[i]);
		i++;
	}

	return (0);
}

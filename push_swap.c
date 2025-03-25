#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_result	data_init(t_data* data, int capacity) {
	if (stack_init(&data->stack_a, capacity) == FAILURE)
		return FAILURE;
	if (stack_init(&data->stack_b, capacity) == FAILURE) {
		stack_destroy(&data->stack_a);
		return FAILURE;
	}
	return SUCCESS;
}

t_result	stack_init(t_stack* stack, int capacity) {
	stack->length = 0;
	stack->capacity = capacity;
	stack->nums = malloc(capacity * sizeof(int));
	if (stack->nums == NULL)
		return FAILURE;
	return SUCCESS;
}

int	main(int argc, char **argv)
{
	t_data	data;
	t_stack	stack;
	int		i;

	if (data_init(&data, argc - 1) == FAILURE)
		return -1;
	i = 0;
	while (i < data.stack_a.length)
	{
		data.stack_a.nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	printf("Stack a before: ");
	i = 0;
	while (i < data.stack_a.length)
	{
		printf("%d ", data.stack_a.nums[i]);
		i++;
	}
	printf("\n");

	printf("Length of stack a: %d\n", data.stack_a.length);
	printf("Size of stack a: %d\n\n", data.stack_a.capacity);

	printf("Stack b before: ");
	i = 0;
	while (i < data.stack_b.length)
	{
		printf("%d ", data.stack_b.nums[i]);
		i++;
	}
	printf("\n");

	printf("Length of stack a: %d\n", data.stack_b.length);
	printf("Size of stack a: %d\n\n", data.stack_b.capacity);


	printf("------------------------------------------------------------\n\n");


	i = 0;
	while (i < 6)
	{
		push(&data.stack_a, &data.stack_b);
		i++;
	}

	printf("Stack a after: ");
	i = 0;
	while (i < data.stack_a.length)
	{
		printf("%d ", data.stack_a.nums[i]);
		i++;
	}
	printf("\n");

	printf("Length of stack a: %d\n", data.stack_a.length);
	printf("Size of stack a: %d\n\n\n", data.stack_a.capacity);


	printf("\n\n\n");
	return (0);
}

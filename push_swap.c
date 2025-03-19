#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	*str;
	char	c;
	int		i;
	size_t	len;
	int		res;

	i = 0;
	while (i < argc - 1)
	{

		i++;
	}

	str = "12345";
	len = ft_strlen(str);

	stack.nums = malloc(len * sizeof(int));
	stack.size = len;

	i = 0;
	while (str[i])
	{
		c = str[i];
		stack.nums[i] = ft_atoi(&c);
		i++;
	}
	i = 0;
	while (i < stack.size)
	{
		printf("%d\n", stack.nums[i]);
		i++;
	}
	return (0);
}

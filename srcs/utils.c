/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:46:24 by authomas          #+#    #+#             */
/*   Updated: 2025/04/13 17:26:02 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	error_handler(t_stack *stack, char *str)
{
	free_stack(stack);
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
}

int	is_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack_size(stack) - 1)
	{
		if (stack->normalized > stack->next->normalized)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

int	is_rev_sort(t_stack *stack)
{
	int	i;

	i = stack_size(stack) - 1;
	while (i > 0)
	{
		if (stack->normalized < stack->next->normalized)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

int	ft_atol(char *s, t_stack *stack)
{
	size_t		i;
	long		res;
	int			sign;

	res = 0;
	i = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		printf("Result = %d\n", res > INT_MAX);
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			error_handler(stack, "Error\n");
		i++;
	}
	return (res * sign);
}

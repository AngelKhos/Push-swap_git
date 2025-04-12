/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:17:28 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 02:00:08 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static int storing(int ac, char **av, t_stack **a)
{
	int		i;
	t_stack	*new;

	i = 1;
	while (i < ac)
	{
		if (i == 1)
		{
			*a = stack_new(ft_atol(av[i], *a));
			if (!(*a))
				return (0);
		}
		else
		{
			new = stack_new(ft_atol(av[i], *a));
			if (!new)
				return (0);
			add_back(*a, new);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	int i = 0;
	if (ac <= 2)
		return (1);
	if (!check_error(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (!storing(ac, av, &a))
		return (free_stack(a), 1);
	while (av[++i])
		ft_printf("index:%d value: %s\n", i, av[i]);
	return (0);
}

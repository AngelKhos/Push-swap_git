/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:17:28 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 01:11:34 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

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
	{
		//free_stack(&a, &b);
		return (1);
	}
	while (av[++i])
		ft_printf("index:%d value: %s\n", i, av[i]);
	return (0);
}

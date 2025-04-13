/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:15:52 by authomas          #+#    #+#             */
/*   Updated: 2025/04/13 17:06:06 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static int	check_digit(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' && !ft_isdigit(arg[i + 1]))
		return (0);
	if (!ft_isdigit(arg[i]) && arg[i] != '-')
		return (0);
	i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(int ac, char **av)
{
	int	i1;
	int	i2;

	i1 = 1;
	while (i1 < ac)
	{
		i2 = i1 + 1;
		while (i2 < ac)
		{
			if (ft_atoi(av[i1]) == ft_atoi(av[i2]))
				return (0);
			i2++;
		}
		i1++;
	}
	return (1);
}

int	check_error(int ac, char **av)
{
	while (ac > 1)
	{
		if (!check_dup(ac, av) || !check_digit(av[ac - 1]))
			return (0);
		ac--;
	}
	return (1);
}

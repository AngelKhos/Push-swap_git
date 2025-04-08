/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:15:52 by authomas          #+#    #+#             */
/*   Updated: 2025/04/08 15:31:56 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "incs/push_swap.h"

int	check_error(char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (!ft_isdigit(av[i][0]) || av[i][0] != '-')
			return (1);
	}
	return (0);
}
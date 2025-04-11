/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:02:03 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 00:04:52 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_malloclen(int n)
{
	int		cpy;
	size_t	i;

	i = 1;
	cpy = n;
	if (n <= 0)
		i += 1;
	while (cpy != 0)
	{
		cpy /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		i;
	long int	cpy;
	char		*asc;

	i = get_malloclen(n);
	cpy = n;
	asc = ft_calloc(sizeof(char), i);
	if (!asc)
		return (NULL);
	if (n < 0)
	{
		asc[0] = '-';
		cpy *= -1;
	}
	i -= 2;
	while (cpy >= 10)
	{
		asc[i] = (cpy % 10) + '0';
		cpy = cpy / 10;
		i--;
	}
	asc[i] = (cpy % 10) + '0';
	return (asc);
}

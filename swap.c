/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:53:43 by authomas          #+#    #+#             */
/*   Updated: 2025/01/29 15:21:06 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *any)
{
	
}

void	swap_a(t_stack *a)
{
	swap(a);
	ft_printf("sa");
}

void	swap_b(char *b)
{
	swap(b);
	ft_printf("sb");
}

void	ss(char *a, char *b)
{
	swap(a);
	swap(b);
	ft_printf("ss");
}

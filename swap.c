/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:53:43 by authomas          #+#    #+#             */
/*   Updated: 2025/02/03 16:58:58 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *any)
{
	int	buff;

	if (any == NULL || any->next == NULL)
		return ;
	buff = any->content;
	any->content = any->next->content;
	any->next->content = buff;
}

void	swap_a(t_stack *a)
{
	swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack *b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

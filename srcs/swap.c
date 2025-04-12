/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:53:43 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 18:01:14 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	swap(t_stack *stack)
{
	int tmp_content;
	int tmp_normal;
	
	tmp_content = stack->next->content;
	stack->next->content = stack->content;
	stack->content = tmp_content;
	tmp_normal = stack->next->normalized;
	stack->next->normalized = stack->normalized;
	stack->normalized = tmp_normal;
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

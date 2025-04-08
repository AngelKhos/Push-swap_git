/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:34:46 by authomas          #+#    #+#             */
/*   Updated: 2025/04/08 15:16:26 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "incs/push_swap.h"

static void	push(t_stack **from, t_stack **to)
{
	t_stack *to_push;

	to_push = *from;
	if (stack_size(*from) > 1)
	{
		to_push->prev->next = to_push->next;
		to_push->next->prev = to_push->prev;
		*from = to_push->next;
	}
	else
		*from = NULL;
	if (!*to)
	{
		*to = to_push;
		(*to)->next = *to;
		(*to)->prev = *to;
	}
	else
		add_front(to, to_push);
}

void	push_a(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_printf("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

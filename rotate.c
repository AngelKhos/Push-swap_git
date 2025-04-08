/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:31:02 by authomas          #+#    #+#             */
/*   Updated: 2025/04/08 13:43:44 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a)
{
	*a = (*a)->next;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b)
{
	*b = (*b)->next;
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	*a = (*a)->next;
	*b = (*b)->next;
	ft_printf("rr\n");
}

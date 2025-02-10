/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde <bde@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:39:45 by authomas          #+#    #+#             */
/*   Updated: 2025/02/07 15:55:13 by bde              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
    *a = (*a)->prev;
    ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
    *b = (*b)->prev;
    ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
    *a = (*a)->prev;
    *b = (*b)->prev;
    ft_printf("rrr\n");
}

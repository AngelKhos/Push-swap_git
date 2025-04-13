/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:27:42 by authomas          #+#    #+#             */
/*   Updated: 2025/04/13 17:09:35 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

static void	solve_three(t_stack **a)
{
	if ((*a)->prev->normalized != 2)
	{
		if ((*a)->normalized == 2)
			rotate_a(a);
		else
			rra(a);
	}
	if ((*a)->normalized > (*a)->next->normalized)
		swap_a(*a);
}

static void	solve_four_five(t_stack **a, t_stack **b)
{
	while (stack_size(*b) < 2)
	{
		if ((*a)->normalized == 0 || (*a)->normalized == 1)
			push_b(a, b);
		else
			rra(a);
	}
	if ((*b)->normalized < (*b)->next->normalized)
		swap_b(*b);
	if ((*a)->prev->normalized != 4)
	{
		if ((*a)->normalized == 4)
			rotate_a(a);
		else
			rra(a);
	}
	if ((*a)->normalized > (*a)->next->normalized)
		swap_a(*a);
	push_a(b, a);
	push_a(b, a);
}

static void	radix_sort_b(t_stack **a, t_stack **b, int i)
{
	int		size;
	t_stack	*b_dup;

	size = stack_size(*b);
	b_dup = *b;
	while (size > 0 || b_dup != *b)
	{
		if ((((b_dup)->normalized >> i) & 1) != 0)
			break ;
		b_dup = b_dup->next;
		size--;
	}
	if (size == 0)
		return ;
	size = stack_size(*b);
	while (size > 0)
	{
		if ((((*b)->normalized >> i) & 1) != 0)
			push_a(b, a);
		else
			rotate_b(b);
		size--;
	}
}

static void	radix_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	i;

	i = 0;
	while (i < 32 && !is_sort(*a))
	{
		size = stack_size(*a);
		while (size > 0 && !is_sort(*a))
		{
			if ((((*a)->normalized >> i) & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
			size--;
		}
		i++;
		if (!is_sort(*b))
			radix_sort_b(a, b, i);
	}
	while (stack_size(*b) > 0)
		push_a(b, a);
}

void	sort(t_stack **a, t_stack **b)
{
	if (stack_size(*a) == 2)
	{
		if ((*a)->normalized > (*a)->next->normalized)
			swap_a(*a);
	}
	else if (stack_size(*a) == 3)
		solve_three(a);
	else if (stack_size(*a) == 4 || stack_size(*a) == 5)
		solve_four_five(a, b);
	else if (stack_size(*a) > 5)
		radix_sort(a, b);
}

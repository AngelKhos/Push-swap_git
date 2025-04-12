/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:17:28 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 20:06:28 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void normalize(t_stack *a)
{
	t_stack *head;
	t_stack *a_dup;
	int step_1;
	int step_2;
	int i;

	a_dup = a;
	head = a;
	step_1 = 0;
	while(step_1 == 0 || a != head)
	{
		i = 0;
		a_dup = head;
		step_2 = 0;
		while(step_2 == 0 || a_dup != head)
		{
			step_2 = 1;
			if (a_dup->content < a->content)
				i++;
			a_dup = a_dup->next;
		}
		a->normalized = i;
		a = a->next;
		step_1 = 1; 
	}
}

static int storing(int ac, char **av, t_stack **a)
{
	int		i;
	t_stack	*new;

	i = 1;
	while (i < ac)
	{
		if (i == 1)
		{
			*a = stack_new(ft_atol(av[i], *a));
			if (!(*a))
				return (0);
		}
		else
		{
			new = stack_new(ft_atol(av[i], *a));
			if (!new)
				return (0);
			add_back(*a, new);
		}
		i++;
	}
	return (1);
}

void print_stack_content(t_stack *stack)
{
	int i = 0;
	t_stack *head = stack;

	while (i == 0 || stack != head)
	{
		ft_printf("index : %d, content %d, normalized %d\n", i, stack->content, stack->normalized);
		i++;
		stack = stack->next;
	}
	ft_printf("sorted? %d\n", is_sort(stack));
}

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	if (ac <= 2)
		return (1);
	if (!check_error(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (!storing(ac, av, &a))
		return (free_stack(a), 1);
	normalize(a);
	if (is_sort(a))
		error_handler(a, "");
	sort(&a, &b);
	print_stack_content(a);
	return (0);
}

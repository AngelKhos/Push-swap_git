/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:47:31 by authomas          #+#    #+#             */
/*   Updated: 2025/04/08 14:09:18 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	add_back(t_stack **lst, t_stack *new)
// {
	
// }

void	add_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	(*lst)->prev->next = new;
	new->prev = (*lst)->prev;
	(*lst)->prev = new;
	new->next = *lst;
	*lst = new;
}

// t_stack	*set_stack(void)
// {
// 	t_stack	*new;

// 	new = malloc(sizeof(t_stack));
// 	if (!new)
// 		return (NULL);
// 	new->content = 0;
// 	new->prev = new;
// 	new->next = new;
// 	return (new);
// }

int stack_size(t_stack *stack)
{
	int size;
	t_stack *root;
	
	root = stack;
	size = 1;
	if (!root)
		return (0);
	while (stack->next != root)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

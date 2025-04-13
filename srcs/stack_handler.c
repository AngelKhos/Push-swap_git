/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:47:31 by authomas          #+#    #+#             */
/*   Updated: 2025/04/13 17:10:32 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	add_back(t_stack *lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	lst->prev->next = new;
	new->prev = lst->prev;
	lst->prev = new;
	new->next = lst;
}

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

t_stack	*stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->prev = new;
	new->next = new;
	return (new);
}

int	stack_size(t_stack *stack)
{
	int		size;
	t_stack	*root;

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

void	free_stack(t_stack *stack)
{
	t_stack	*del_node;
	int		size;
	int		i;

	size = stack_size(stack);
	i = 0;
	if (!stack)
		return ;
	while (i < size)
	{
		del_node = stack;
		stack = stack->next;
		free(del_node);
		i++;
	}
}

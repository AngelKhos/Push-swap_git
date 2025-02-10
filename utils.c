/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde <bde@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:47:31 by authomas          #+#    #+#             */
/*   Updated: 2025/02/07 14:47:18 by bde              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	t_stack	*count;

	count = ft_lstlast(*lst);
	if (count != NULL)
		count->next = new;
	else
		add_front(lst, new);
}

void	add_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

t_stack	*set_stack(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = 0;
	new->prev = new;
	new->next = new;
	return (new);
}

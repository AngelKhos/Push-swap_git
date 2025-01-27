/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:21:40 by authomas          #+#    #+#             */
/*   Updated: 2024/11/27 18:25:37 by authomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*count;
	t_list	*temp;

	count = *lst;
	while (count != NULL)
	{
		del(count->content);
		temp = count->next;
		free(count);
		count = NULL;
		count = temp;
	}
	*lst = NULL;
}

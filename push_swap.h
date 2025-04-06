/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:17:41 by authomas          #+#    #+#             */
/*   Updated: 2025/02/10 09:57:50 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

typedef struct s_head
{
	t_stack	*a;
	t_stack	*b;	
}	t_head;

t_stack	*set_stack(void);

#endif

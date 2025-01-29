/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:17:41 by authomas          #+#    #+#             */
/*   Updated: 2025/01/29 10:02:03 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_build
{
	void			*content;
	struct s_build	*prev;
}	t_build;


#endif

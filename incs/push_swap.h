/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: authomas <authomas@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:17:41 by authomas          #+#    #+#             */
/*   Updated: 2025/04/12 01:55:22 by authomas         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

////////////////////////////////////////////////////////////////

t_stack	*stack_new(int content);
int		stack_size(t_stack *stack);
void	add_front(t_stack **lst, t_stack *new);
void	add_back(t_stack *lst, t_stack *new);
void	free_stack(t_stack *stack);

////////////////////////////////////////////////////////////////

int		check_error(int ac, char **av);
void	error_handler(t_stack *stack, char *str);
int		ft_atol(char *s, t_stack *stack);

////////////////////////////////////////////////////////////////

void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	push_a(t_stack **b, t_stack **a);
void	push_b(t_stack **a, t_stack **b);

#endif

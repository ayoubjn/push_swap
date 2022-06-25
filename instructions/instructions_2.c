/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:18:15 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 04:40:47 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

void	pb(t_list **a, t_list **b, int print)
{
	if (*a)
	{
		push(b, (*a)->content);
		pop(a);
		if (print)
			write(1, "pb\n", 3);
	}
}

void	ra(t_list **a, int print)
{
	if ((*a) && ((*a)->next))
	{
		rotate(a);
		if (print)
			write(1, "ra\n", 3);
	}
}

void	rb(t_list **b, int print)
{
	if ((*b) && ((*b)->next))
	{
		rotate(b);
		if (print)
			write(1, "rb\n", 3);
	}
}

void	rra(t_list **a, int print)
{
	if (*a && (*a)->next)
	{
		r_rotate(a);
		if (print)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_list **b, int print)
{
	if (*b && (*b)->next)
	{
		r_rotate(b);
		if (print)
			write(1, "rrb\n", 4);
	}
}

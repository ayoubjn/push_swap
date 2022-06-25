/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 03:36:38 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 04:42:52 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

void	sa(t_list *a, int print)
{
	int	temp;

	if (a && a->next)
	{
		temp = a->content;
		a->content = (a->next)->content;
		(a->next)->content = temp;
		if (print)
			write(1, "sa\n", 3);
	}
}

void	sb(t_list *b, int print)
{
	int	temp;

	if (b && b->next)
	{
		temp = b->content;
		b->content = (b->next)->content;
		(b->next)->content = temp;
		if (print)
			write(1, "sb\n", 3);
	}
}

void	ss(t_list *a, t_list *b, int print)
{
	if (a && a->next)
	{
		sa(a, 0);
		sb(b, 0);
		if (print)
			write(1, "ss\n", 3);
	}
}

void	rr(t_list **a, t_list **b, int print)
{
	if ((*a && (*a)->next)
		&& (*b && (*b)->next))
	{
		ra(a, 0);
		rb(b, 0);
		if (print)
			write(1, "rr\n", 3);
	}
}

void	rrr(t_list **a, t_list **b, int print)
{
	if ((*a && (*a)->next)
		&& (*b && (*b)->next))
	{
		rra(a, 0);
		rrb(b, 0);
		if (print)
			write(1, "rrr\n", 4);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:56:03 by ajana             #+#    #+#             */
/*   Updated: 2022/06/24 04:52:48 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_ind(t_list *stack, int content)
{
	int	ind;

	ind = 0;
	while (stack && (stack->content != content))
	{
		stack = stack->next;
		ind++;
	}
	return (ind);
}

void	push_to_b(t_list **a, t_list **b, int min_a, int *a_size)
{
	int	ind;

	ind = get_ind(*a, min_a);
	while (((*a)->content != min_a))
	{
		if (ind < ((*a_size / 2) + 1))
			ra(a, 1);
		else
			rra(a, 1);
	}
	pb(a, b, 1);
	(*a_size)--;
}

void	sort_3(t_list **a, int min_a)
{
	int	ind;

	ind = get_ind(*a, min_a);
	if (ind == 0)
		ra(a, 1);
	else if (ind == 1)
		rra(a, 1);
	if ((*a)->content > ((*a)->next)->content)
		sa(*a, 1);
	if (!is_sorted(*a))
		rra(a, 1);
}

void	sort_small_stack(t_list **a, t_list **b, int a_size)
{
	int		min_a;

	min_a = 0;
	index_stack(*a, a_size);
	while (a_size > 3 && (!is_sorted(*a)))
	{
		push_to_b(a, b, min_a, &a_size);
		min_a++;
	}
	if (a_size <= 3)
		sort_3(a, min_a);
	while (*b)
		pa(a, b, 1);
}

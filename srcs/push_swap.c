/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:05:24 by ajana             #+#    #+#             */
/*   Updated: 2022/06/25 13:20:58 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b, int ac)
{
	int	i;
	int	shift;
	int	temp;

	shift = 0;
	temp = 0;
	index_stack(*a, ac);
	while (!is_sorted(*a) && !(*b))
	{
		i = 0;
		while (i < ac)
		{
			temp = (*a)->content >> shift;
			if (!(temp & 1))
				pb(a, b, 1);
			else
				ra(a, 1);
			i++;
		}
		while (*b)
			pa(a, b, 1);
		shift++;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		if (!stack_init(&a, ac - 1, av))
			return (0);
		if ((ac - 1) <= 20)
			sort_small_stack(&a, &b, ac - 1);
		else
			radix_sort(&a, &b, ac - 1);
	}
}

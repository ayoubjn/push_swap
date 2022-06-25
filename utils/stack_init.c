/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 05:24:30 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 07:06:03 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	stack_init(t_list **a, int ind, char **av)
{
	if (!argv_check(av))
		return (0);
	while (ind > 0)
	{
		push(a, ft_atoi(av[ind]));
		ind--;
	}
	if (is_sorted(*a))
		return (0);
	return (1);
}

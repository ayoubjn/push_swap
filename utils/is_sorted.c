/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:31:03 by ajana             #+#    #+#             */
/*   Updated: 2022/06/19 23:24:36 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	is_sorted(t_list *a)
{
	if (!a)
		return (0);
	while (a->next)
	{
		if (a->content > (a->next)->content)
			return (0);
		a = a->next;
	}
	return (1);
}

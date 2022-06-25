/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 04:17:24 by ajana             #+#    #+#             */
/*   Updated: 2022/06/25 13:21:05 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	excute_ins(char *buff, t_list **a, t_list **b)
{
	if (!ft_strncmp(buff, "pa\n", 3))
		pa(a, b, 0);
	else if (!ft_strncmp(buff, "pb\n", 3))
		pb(a, b, 0);
	else if (!ft_strncmp(buff, "sa\n", 3))
		sa(*a, 0);
	else if (!ft_strncmp(buff, "sb\n", 3))
		sb(*b, 0);
	else if (!ft_strncmp(buff, "ss\n", 3))
		ss(*a, *b, 0);
	else if (!ft_strncmp(buff, "ra\n", 3))
		ra(a, 0);
	else if (!ft_strncmp(buff, "rb\n", 3))
		rb(b, 0);
	else if (!ft_strncmp(buff, "rr\n", 3))
		rr(a, b, 0);
	else if (!ft_strncmp(buff, "rra\n", 4))
		rra(a, 0);
	else if (!ft_strncmp(buff, "rrb\n", 4))
		rrb(b, 0);
	else if (!ft_strncmp(buff, "rrr\n", 4))
		rrr(a, b, 0);
	else
		return (0);
	return (1);
}

void	read_ins(char *buff, t_list **a, t_list **b)
{
	while (buff)
	{
		if (!excute_ins(buff, a, b))
		{
			write (2, "Error!\n", 8);
			free(buff);
			exit(0);
		}
		free(buff);
		buff = get_next_line(0);
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
		read_ins(get_next_line(0), &a, &b);
		if (is_sorted(a) && (!b))
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
}

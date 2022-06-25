/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:22:03 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 06:32:00 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	binary_search(int *tab, int min, int max, int n)
{
	int	mid;

	if (max != min)
	{
		mid = (max + min) / 2;
		if (n < tab[mid])
			return (binary_search(tab, min, mid, n));
		else if (n > tab[mid])
			return (binary_search(tab, mid, max, n));
		else
			return (mid);
	}
	return (-1);
}

void	swap(int *x, int*y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	partition(int *tab, int low, int high)
{
	int	i;
	int	j;

	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (tab[j] < tab[high])
		{
			i++;
			swap(&tab[i], &tab[j]);
		}
		j++;
	}
	swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	q_sort(int *tab, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(tab, low, high);
		q_sort(tab, low, pi - 1);
		q_sort(tab, pi + 1, high);
	}
}

void	index_stack(t_list *a, int size)
{
	t_list	*temp;
	int		*tab;
	int		i;

	i = 0;
	temp = a;
	tab = malloc(sizeof(int) * (size));
	if (!tab)
		return ;
	while (temp && i < size)
	{
		tab[i] = temp->content;
		temp = temp->next;
		i++;
	}
	q_sort(tab, 0, size - 1);
	while (a)
	{
		a->content = binary_search(tab, 0, size, a->content);
		a = a->next;
	}
	free (tab);
}

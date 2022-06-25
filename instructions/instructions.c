/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:24:24 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 04:42:25 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

void	push(t_list	**stack, int data)
{
	t_list	*node;

	node = ft_lstnew(data);
	node->next = *stack;
	*stack = node;
}

void	pop(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	temp = NULL;
}

void	rotate(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = NULL;
}

void	r_rotate(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	temp->next->next = *stack;
	*stack = temp->next;
	temp->next = NULL;
}

void	pa(t_list **a, t_list **b, int print)
{
	if (*b)
	{
		push(a, (*b)->content);
		pop(b);
		if (print)
			write(1, "pa\n", 3);
	}
}

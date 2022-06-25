/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:13:18 by ajana             #+#    #+#             */
/*   Updated: 2022/06/20 06:28:35 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# define INT_MAX 2147483647

/*---utils---*/

int		stack_init(t_list **a, int ind, char **av);
int		is_sorted(t_list *a);
void	index_stack(t_list *a, int size);
int		argv_check(char **av);
int		min_ind(t_list *stack, int min);
void	print_stack(t_list *stack);

/*instructions*/

void	push(t_list	**stack, int data);
void	pop(t_list **stack);
void	rotate(t_list **stack);
void	r_rotate(t_list **stack);

void	sa(t_list *a, int print);
void	sb(t_list *b, int print);
void	ss(t_list *a, t_list *b, int print);
void	pa(t_list **a, t_list **b, int print);
void	pb(t_list **a, t_list **b, int print);
void	ra(t_list **a, int print);
void	rb(t_list **b, int print);
void	rra(t_list **a, int print);
void	rrb(t_list **b, int print);
void	rr(t_list **a, t_list **b, int print);
void	rrr(t_list **a, t_list **b, int print);

void	sort_small_stack(t_list **a, t_list **b, int a_size);
char	*get_next_line(int fd);

#endif
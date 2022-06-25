/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:35:13 by ajana             #+#    #+#             */
/*   Updated: 2022/06/25 13:14:58 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	err(void)
{
	write (2, "Error!\n", 8);
	return (0);
}

int	dup_check(char **s1, char *to_find)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_atoi(s1[i]) == ft_atoi(to_find))
			return (0);
		i++;
	}
	return (1);
}

int	is_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1] != '\0')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	argv_check(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!is_int(av[i]))
			return (err());
		else if (!dup_check(&av[i + 1], av[i]))
			return (err());
		else if (ft_atoi(av[i]) > INT_MAX)
			return (err());
		i++;
	}
	return (1);
}

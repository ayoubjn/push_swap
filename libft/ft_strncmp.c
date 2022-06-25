/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <ajana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:00:44 by ajana             #+#    #+#             */
/*   Updated: 2022/06/24 04:18:52 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else if (!s1)
		return (-1);
	while ((s1[i] == s2[i]) && (i < n - 1) && (s1[i] && s2[i]))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_strncmp((const char *)av[1], (const char *)av[2], 2));
}*/

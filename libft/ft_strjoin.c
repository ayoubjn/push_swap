/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:49:50 by ajana             #+#    #+#             */
/*   Updated: 2021/11/12 21:57:39 by ajana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*s;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (*s1)
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strjoin(av[1], av[2]));
}*/

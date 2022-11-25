/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:16:58 by wfan              #+#    #+#             */
/*   Updated: 2022/11/25 21:52:22 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	len_little = ft_strlen(l);
	if (!l)
		return (b);
	while (i < len)
	{
		if (b[i] == l[i])
		{
			j = 0;
			while (b[i + j] == l[j])
				j++;
			if (j == len_little)
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}

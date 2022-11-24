/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:05:47 by wfan              #+#    #+#             */
/*   Updated: 2022/11/12 18:31:57 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i_max;
	char	*s2;

	s2 = (char *)s;
	if (!s2)
		return (NULL);
	i_max = strlen(s) - 1;
	while (s2[i_max] != c)
	{
		if (i_max == 0)
			return (NULL);
		i_max--;
	}
	return (&s2[i_max]);
}

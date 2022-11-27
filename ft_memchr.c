/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:37:19 by wfan              #+#    #+#             */
/*   Updated: 2022/11/27 18:34:00 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (!str)
		return (NULL);
	while (str[i] != c)
	{
		if (str[i] == '\0' || i >= n)
			return (NULL);
		i++;
	}
	return (&str[i]);
}

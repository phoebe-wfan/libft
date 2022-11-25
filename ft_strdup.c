/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:36:36 by wfan              #+#    #+#             */
/*   Updated: 2022/11/25 21:46:22 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/
size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str_cpy;

	len = ft_strlen(s);
	str_cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_cpy)
		return (NULL);
	ft_strcpy(str_cpy, s);
	return (str_cpy);
}

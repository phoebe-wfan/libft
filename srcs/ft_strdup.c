/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:36:36 by wfan              #+#    #+#             */
/*   Updated: 2022/11/13 17:50:23 by wfan             ###   ########.fr       */
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

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*str_cpy;

	i = 0;
	len = strlen(s);
	str_cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_cpy)
		return (NULL);
	ft_strcpy(char *str_cpy, const char *s);
	return (str_cpy);
}

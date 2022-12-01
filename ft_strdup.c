/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:36:36 by wfan              #+#    #+#             */
/*   Updated: 2022/12/01 14:09:30 by wfan             ###   ########.fr       */
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
char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!src)
		return (NULL);
	s = (char *)src;
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
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

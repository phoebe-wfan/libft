/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:01 by wfan              #+#    #+#             */
/*   Updated: 2022/12/01 14:12:50 by wfan             ###   ########.fr       */
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
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s2;
    
    i = 0;
	s2 = (char *)s;
	if (!s2)
		return (NULL);
	else
	{
		while (s2[i] != c)
		{
			if (s2[i] == '\0')
				return (NULL);
			i++;
		}
		return (&s2[i]);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_sub;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	str_sub = malloc(len + 1);
	if (!str_sub)
		return (NULL);
	i = 0;
	while (str[start + i] && i < len && start < ft_strlen((const char *)str))
	{
		str_sub[i] = str[start + i];
		i++;
	}
	str_sub[i] = '\0';
	return (str_sub);
}

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
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str_new;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	str_new = ft_substr(s1, 0, len + 1);
	if (!str_new)
		return (NULL);
	return (str_new);
}

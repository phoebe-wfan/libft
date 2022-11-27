/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:54 by wfan              #+#    #+#             */
/*   Updated: 2022/11/27 18:16:06 by wfan             ###   ########.fr       */
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

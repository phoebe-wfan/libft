/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:50:54 by wfan              #+#    #+#             */
/*   Updated: 2022/11/17 14:43:40 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str_sub = (char *)malloc(len + 1);
	if (!str_sub)
		return (NULL);
	while (i < len)
	{
		str_sub[i] = s[start];
		i++;
		start++;
	}
	str_sub[i] = '\0';
	return (str_sub);
}

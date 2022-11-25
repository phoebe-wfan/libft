/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:50:22 by wfan              #+#    #+#             */
/*   Updated: 2022/11/25 14:51:00 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	size_t	i;
	size_t	i_new;
	size_t	len_new;

	i = 0;
    i_new = 0;
	len_new = strlen(s1) + strlen(s2) + 1;
	str_new = (char *)malloc(len_new);
	if (!str_new)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_new[i_new] = s1[i];
		i_new++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str_new[i_new] = s2[i];
		i_new++;
		i++;
	}
	str_new[i_new] = '\0';
	return (str_new);
}

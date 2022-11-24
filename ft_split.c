/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:24:13 by wfan              #+#    #+#             */
/*   Updated: 2022/11/24 17:22:17 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbr_words(char const *str, char c)
{
	size_t	i;
	size_t	nbr;
	char	*s;

	i = 0;
	nbr = 0;
	s = (char *)str;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			i++;
		nbr++;
	}
	return (nbr);
}

char	**free_tab(char **list, size_t i)
{
	while (list[i])
	{
		free(list[i]);
		i--;
	}
	free(list);
	return (NULL);
}

char	*ft_next_word(size_t *start, const char *s, char c)
{
	size_t	len;
	char	*res;

	while (s[*start] == c)
		(*start)++;
	len = 0;
	while (s[*start + len] != c && s[*start + len])
		len++;
	res = ft_substr(s, *start, len);
	*start += len;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	i;
	char	**list;
	size_t	nbr_words;

	nbr_words = ft_nbr_words(s, c);
	list = (char **)malloc(nbr_words + 1);
	if (!list || !s)
		return (NULL);
	i = 0;
	start = 0;
	while (i < nbr_words)
	{
		list[i] = ft_next_word(&start, s, c);
		if (!list)
			return (free_tab(list, i));
		i++;
	}
	list[i] = 0;
	return (list);
}

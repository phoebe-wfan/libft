/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:14:24 by wfan              #+#    #+#             */
/*   Updated: 2022/11/24 17:39:09 by wfan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

void	ft_i_len2(int n, size_t i, size_t len2, char *result, size_t len)
{
	while (i < len2)
	{
		result[i] = ((n / ft_div(len)) % 10) + 48;
		len--;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int	i;
	size_t	len;
	size_t	len2;
	char	*result;

	i = 0;
	len = nbr_len(n);
	len2 = len;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648\0");
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
		i++;
		len--;
	}
	ft_i_len2(n, i, len2, result, len);
	result[i] = '\0';
	return (result);
}
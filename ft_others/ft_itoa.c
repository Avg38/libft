/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avialle- <avialle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:26:23 by avialle-          #+#    #+#             */
/*   Updated: 2023/12/12 11:04:02 by avialle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	len_itoa(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_full(char *str, int n, size_t len, size_t sign)
{
	size_t	i;

	len--;
	i = len;
	while (len > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		len--;
		i--;
	}
	if (sign == 0)
		str[i] = (n % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	sign;
	size_t	len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
		sign = 1;
	len = sign + len_itoa(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = 0;
	if (sign == 1)
	{
		*str = '-';
		n = -n;
	}
	return (ft_full(str, n, len, sign));
}

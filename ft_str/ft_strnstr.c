/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avialle- <avialle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:53:08 by avialle-          #+#    #+#             */
/*   Updated: 2023/12/12 11:05:44 by avialle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s2 = ft_strlen(s2);
	if (s2[j] == 0)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] == s1[i + j] && j < len_s2 && i + j < len)
			j++;
		if (j == len_s2)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avialle- <avialle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:19:35 by avialle-          #+#    #+#             */
/*   Updated: 2023/12/12 11:00:53 by avialle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	return ((void *)ft_memset(str, 0, nmemb * size));
}

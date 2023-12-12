/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avialle- <avialle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:35:06 by avialle-          #+#    #+#             */
/*   Updated: 2023/12/12 11:00:44 by avialle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_node;
	void	*temp;

	new_lst = NULL;
	tmp_node = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		tmp_node = ft_lstnew(temp);
		if (!tmp_node)
		{
			ft_lstclear(&new_lst, del);
			del(temp);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, tmp_node);
		lst = lst->next;
	}
	return (new_lst);
}

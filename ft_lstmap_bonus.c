/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <antonio-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:49:50 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/26 14:24:39 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*lst_node;
	void	*node_content;

	if (!lst || !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		node_content = f(lst->content);
		lst_node = ft_lstnew(node_content);
		if (!lst_node)
		{
			del(node_content);
			ft_lstclear(&first, (*del));
			return (NULL);
		}
		ft_lstadd_back(&first, lst_node);
		lst = lst->next;
	}
	return (first);
}

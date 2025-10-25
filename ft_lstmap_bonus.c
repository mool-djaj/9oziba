/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:26 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/25 15:05:27 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*node_cont;
	t_list	*new_list;
	t_list	*new_node;
	t_list	*node;

	node = lst;
	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (node)
	{
		node_cont = f(node->content);
		new_node = ft_lstnew(node_cont);
		if (!new_node)
			ft_lstclear (&new_list, del);
		ft_lstadd_back (&new_list, new_node);
		node = node->next;
	}
	return (new_list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:04:20 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 20:48:29 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
	{
		return ;
	}
	del (lst->content);
	free (lst);
}
// void del(void *cont)
// {
// 	free (cont);
// }

// int main()
// {
// 	t_list *node = ft_lstnew("aywaaa");
// 	printf("the content:%s\n",node->content);
// 	ft_lstdelone(node,del);
// 	printf("the content:%s\n",node->content);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:13 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 19:01:16 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void up(void *cont)
{
	char **p = (char **)cont;
	*p  = "1";
	
}

int main()
{
	char *str = "0";
	t_list *node = ft_lstnew(&str);
	printf("the content:%s\n",*(char **)node->content);
	ft_lstiter(node,up);
	printf("the content:%s\n",*(char **)node->content);
}


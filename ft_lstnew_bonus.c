/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:31 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 01:49:44 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	*node = (t_list){content, NULL};
	return (node);
}
// int main(void)
// {
// 	t_list *ay = ft_lstnew("000");
// 	printf("%s",ay->content);
	
// }

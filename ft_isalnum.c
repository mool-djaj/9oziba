/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:38:40 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/01 05:02:42 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
// int main(void)
// {
//     char test =  'a';
// 	printf("%d\n",ft_isalnum(test));
// 	test = '1';
// 	printf("%d\n",ft_isalnum(test));
// 	test = '/';
// 	printf("%d\n",ft_isalnum(test));
// }
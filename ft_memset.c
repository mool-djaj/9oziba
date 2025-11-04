/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:49:40 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 20:01:03 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}




// typedef	struct{
// 	int a; //-1337
// 	char	b;
// 	long c;
// } list;
// int main()
// {
// 	int i = 0;
// 	//-1337
// 	list	arr[] = {{17, 'f', 1333337 }, {0, 'a', 0}, {84512, 'd', 0}};
	

	
// 				while (i  < 3)
// 				{
// 					ft_memset(arr+i,0XFF,4);
// 					ft_memset(arr+i,0xFA,2);
// 					ft_memset(arr+i,0xC7,1);
// 					printf("%d\n",arr[i].a);
// 					i++;
// 				}
				

// 				// ft_memset(&arr[0].a,5,2);
// 				// ft_memset(&arr[0].a,57,1);
// 	}

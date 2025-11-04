/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:38:56 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/01 04:28:24 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*ptr,	size_t	n)
{
	size_t				i;
	unsigned char		*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
//     int ptr[] = {1,5,8,5,9,5,9,9,5,5,8,5,5};
//     int len = sizeof(ptr) / sizeof(ptr[0]);  // number of elements
//     int i = 0;

//     printf("Before ft_bzero:\n");
//     while (i < len)
//     {
//         printf("%d ", ptr[i]);
//         i++;
//     }
//     printf("\n");

//     ft_bzero(ptr, sizeof(ptr));  // zero the entire array

//     printf("After ft_bzero:\n");
//     i = 0;  // reset i
//     while (i < len)
//     {
//         printf("%d ", ptr[i]);
//         i++;
//     }
//     printf("\n");

//     return 0;
// }

// int main()
// {
// 	int i = 0;
// 	char ptr[] = "ayoubbbbbb2bb22b";
// 	int len = sizeof(ptr);

// 	printf("%s,",ptr);
// 	ft_bzero(ptr,10);
// 	while (i < len)
// 	{
// 		printf("\n%d",ptr[i]);
// 		i++;
// 	}
	
// }
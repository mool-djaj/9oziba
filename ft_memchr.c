/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:50 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/01 05:44:37 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h> // for memchr

// int main(void)
// {
//     const char str[] = "Hello world!";
//     int c = 'o';
//     size_t n = 12;

//     // Test 1 — normal case
//     void *res1 = ft_memchr(str, c, n);
//     void *res2 = memchr(str, c, n);

//     printf("Searching for '%c' in \"%s\" (n = %zu)\n", c, str, n);
//     printf("ft_memchr: %s\n", res1 ? (char *)res1 : "NULL");
//     printf("memchr:    %s\n", res2 ? (char *)res2 : "NULL");

//     // Test 2 — char not found
//     c = 'x';
//     res1 = ft_memchr(str, c, n);
//     res2 = memchr(str, c, n);
//     printf("\nSearching for '%c' (not in string):\n", c);
//     printf("ft_memchr: %s\n", res1 ? (char *)res1 : "NULL");
//     printf("memchr:    %s\n", res2 ? (char *)res2 : "NULL");

//     // Test 3 — n smaller than string length
//     c = 'o';
//     n = 5;
//     res1 = ft_memchr(str, c, n);
//     res2 = memchr(str, c, n);
//     printf("\nSearching for '%c' with n = %zu:\n", c, n);
//     printf("ft_memchr: %s\n", res1 ? (char *)res1 : "NULL");
//     printf("memchr:    %s\n", res2 ? (char *)res2 : "NULL");

//     return 0;
// }

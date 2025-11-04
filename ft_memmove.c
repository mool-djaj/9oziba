/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:03 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/01 07:51:41 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "abcdef";
    char str2[20] = "abcdef";

    printf("Before:\nstr1 = %s\nstr2 = %s\n", str1, str2);

    // Case 1: Overlapping forward copy
    ft_memmove(str1 + 2, str1, 4);
    memmove(str2 + 2, str2, 4);

    printf("\nAfter memmove overlap (src < dest):\n");
    printf("ft_memmove: %s\n", str1);
    printf("memmove:    %s\n", str2);

    // Case 2: Normal non-overlapping
    char src[] = "12345";
    char dest1[10] = "xxxxx";
    char dest2[10] = "xxxxx";

    ft_memmove(dest1, src, 5);
    memmove(dest2, src, 5);

    printf("\nNormal copy (no overlap):\n");
    printf("ft_memmove: %s\n", dest1);
    printf("memmove:    %s\n", dest2);

    return 0;
}

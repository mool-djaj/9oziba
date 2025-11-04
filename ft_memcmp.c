/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 17:37:17 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *) s1;
	ptr2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s1[] = "2";
//     char s2[] = "5";

//     printf("Test\n");
//     printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, sizeof()));
//     printf("memcmp:    %d\n", memcmp(s1, s2, 12));

//     return 0;
// }

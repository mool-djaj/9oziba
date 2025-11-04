/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:41:21 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/03 18:00:59 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s\n",ft_strnstr(NULL, "1",0));
// 	printf("%s",strnstr(NULL, "1",0));
// }
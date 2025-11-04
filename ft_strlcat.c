/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/02 18:44:33 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t ds_size)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;
	
	len_s = ft_strlen(src);
	
	if (!dst && ds_size == 0)
		return (len_s);
	len_d = ft_strlen(dst);
	i = 0;
	if (ds_size == 0)
		return (len_s);
	if (ds_size <= len_d)
		return (ds_size + len_s);
	while (src[i] && (len_d + i + 1) < ds_size)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_s + len_d);
}
// int main()
// {	
// 	printf("%zu\n",strlcat(NULL,"",0));
// 	printf("%zu",ft_strlcat(NULL,"",0));
// }
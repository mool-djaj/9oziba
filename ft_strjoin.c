/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:50 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/26 16:36:27 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*d;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	d = ft_calloc(len_s1 + len_s2 + 1, sizeof (char));
	if (!d)
		return (NULL);
	while (i < len_s1)
	{
		d[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		d[i + j] = s2[j];
		j++;
	}
	return (d);
}

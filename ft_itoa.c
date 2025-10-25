/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:52:43 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/21 12:52:44 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*d;

	num = n;
	len = ft_numlen(num);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	d[len] = '\0';
	if (num == 0)
	{
		d[0] = '0';
		return (d);
	}
	if (num < 0)
		num = -num;
	while (num != 0)
	{
		d[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		d[0] = '-';
	return (d);
}

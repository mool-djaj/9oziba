/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:38:48 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/04 01:33:04 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_overflow(long long nb, int sign, int digit)
{
	if (nb > 9223372036854775807 / 10
		|| (nb == 9223372036854775807 / 10 && digit > (int)(9223372036854775807 % 10)))
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long long	nb;
	int			sign;
	int			i;
	int			check;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = ft_check_overflow(nb, sign, str[i] - '0');
		if (check != 1)
			return (check);
		nb = nb * 10 + (str[i++] - '0');
	}
	return ((int)(nb * sign));
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main(void)
{
    const char *big_pos = "66934689721357284725468254685";
    const char *big_neg = "-922337203685477580880808080880";
    printf("ft_atoi positive: %d\n", ft_atoi(big_pos));
    printf("atoi    positive: %d\n", atoi(big_pos));
    printf("ft_atoi negative: %d\n", ft_atoi(big_neg));
    printf("atoi    negative: %d\n", atoi(big_neg));
    return 0;
}
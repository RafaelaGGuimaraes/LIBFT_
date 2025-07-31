/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:11:23 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/30 18:34:57 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			digits;
	char		*str;

	nb = n;
	digits = ft_numlen(nb);
	str = ft_calloc(digits + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	while (digits > 0)
	{
		str[--digits] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *res;

// 	res = ft_itoa(42);
// 	if (res)
// 	{
// 		printf("ft_itoa(42) = %s\n", res);
// 		free(res);
// 	}
// 	else
// 		printf("ft_itoa(42) = NULL (erro de alocação)\n");

// 	return (0);
// }

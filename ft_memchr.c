/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:26:44 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 16:48:42 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h> // para comparar com a original

// void	*ft_memchr(const void *s, int c, size_t n);

// int	main(void)
// {
// 	const char str[] = "42 São Paulo!";
// 	char *res1 = ft_memchr(str, 'a', 12);
// 	char *res2 = memchr(str, 'a', 12);

// 	printf("ft_memchr: %s\n", res1 ? res1 : "NULL");
// 	printf("memchr:    %s\n", res2 ? res2 : "NULL");

// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:27:05 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 16:58:28 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *a = "abcde";
// 	const char *b = "abcde";
// 	const char *c = "abcdf";
// 	const char *d = "abCde";

// 	printf("Teste 1 - Iguais:\n");
// 	printf("ft_memcmp: %d\n", ft_memcmp(a, b, 5));
// 	printf("memcmp:    %d\n\n", memcmp(a, b, 5));

// 	printf("Teste 2 - Letra diferente no final:\n");
// 	printf("ft_memcmp: %d\n", ft_memcmp(a, c, 5));
// 	printf("memcmp:    %d\n\n", memcmp(a, c, 5));

// 	printf("Teste 3 - Letra minúscula vs maiúscula:\n");
// 	printf("ft_memcmp: %d\n", ft_memcmp(a, d, 5));
// 	printf("memcmp:    %d\n", memcmp(a, d, 5));

// 	return 0;
// }

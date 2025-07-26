/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:28:08 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 18:36:46 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[(i + j)] != '\0' && needle[j] != '\0'
				&& (haystack[(i + j)] == needle[j]) && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *hay = "42 São Paulo";
// 	char *res;

// 	printf("Haystack: \"%s\"\n\n", hay);
// 	// Teste 1: needle no começo
// 	res = ft_strnstr(hay, "42", 12);
// 	printf("Teste 1 - needle \"42\" em len=12: %s\n",
// 		res ? res : "NULL");
// 	// Teste 2: needle no final
// 	res = ft_strnstr(hay, "Paulo", 13);
// 	printf("Teste 2 - needle \"Paulo\" em len=12: %s\n",
// 		res ? res : "NULL");
// 	// Teste 3: needle além do limite
// 	res = ft_strnstr(hay, "Paulo", 6);
// 	printf("Teste 3 - needle \"Paulo\" em len=6: %s\n",
// 		res ? res : "NULL");
// 	// Teste 4: needle vazia
// 	res = ft_strnstr(hay, "", 5);
// 	printf("Teste 4 - needle \"\" (vazia) em len=5: %s\n",
// 		res ? res : "NULL");
// 	return (0);
// }

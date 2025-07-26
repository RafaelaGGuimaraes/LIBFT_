/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:26:30 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 16:08:26 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if ((ptrsrc < ptrdest) && (ptrsrc + n > ptrdest))
	{
		while (n > 0)
		{
			n--;
			ptrdest[n] = ptrsrc[n];
		}
	}
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h> 

// int	main(void)
// {
// 	char buffer1[100] = "abcdef";
// 	char buffer2[100] = "abcdef";

// 	printf("Antes do memmove:\n");
// 	printf("buffer1: %s\n", buffer1);

// 	// Teste com sobreposição (copiar os últimos 3 para o início)
// 	ft_memmove(buffer1 + 1, buffer1, 5);
// 	memmove(buffer2 + 1, buffer2, 5); //

// 	printf("\nDepois do ft_memmove:\n");
// 	printf("buffer1: %s\n", buffer1); 

// 	printf("\nDepois do memmove original:\n");
// 	printf("buffer2: %s\n", buffer2);

// 	return (0);
// }
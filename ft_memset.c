/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:24:46 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 18:53:59 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
//     char buffer[20];
//     int i;

//     // Preenche buffer com 'A' nos primeiros 10 bytes
//     ft_memset(buffer, 'A', 10);

//     // Adiciona '\0' para terminar string e poder imprimir
//     buffer[10] = '\0';

//     printf("Buffer depois de ft_memset: %s\n", buffer);

//     // Mostrar os valores em hexadecimal para verificar cada byte
//     printf("Bytes no buffer: ");
//     for (i = 0; i < 10; i++)
//         printf("%02X ", (unsigned char)buffer[i]);
//     printf("\n");

//     return 0;
// }

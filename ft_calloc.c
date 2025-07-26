/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:28:43 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 18:51:04 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (size_t) - 1 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h> 

// int main(void)
// {
//     int *arr;
//     size_t n = 5;
//     size_t i;

//     arr = (int *)ft_calloc(n, sizeof(int));
//     if (!arr)
//     {
//         printf("Falha ao alocar memória\n");
//         return (1);
//     }

//     printf("Conteúdo do array alocado com ft_calloc:\n");
//     for (i = 0; i < n; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     free(arr);
//     return (0);
// }
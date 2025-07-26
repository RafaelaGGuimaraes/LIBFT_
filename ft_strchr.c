/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:27:18 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 17:30:16 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *str = "42 São Paulo!";
// 	char *result = ft_strchr(str, 'S');
// 	char *result2 = ft_strchr(str, '\0');

// 	printf("Resultado com 'S': %s\n", 
// 		result ? result : "NULL");
// 	printf("Resultado com '\\0': %s\n", 
// 		result2 ? "Encontrado terminador" : "NULL");

// 	return 0;
// }
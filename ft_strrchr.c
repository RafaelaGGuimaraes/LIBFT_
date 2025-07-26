/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:27:52 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/26 17:53:44 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last = NULL;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *str = "banana42";
// 	char *res;

// 	printf("String: \"%s\"\n\n", str);
// 	// Teste 1: última ocorrência de 'a'
// 	res = ft_strrchr(str, 'a');
// 	printf("Última ocorrência de 'a': %s\n",
// 		res ? res : "NULL");
// 	// Teste 2: última ocorrência de 'n'
// 	res = ft_strrchr(str, 'n');
// 	printf("Última ocorrência de 'n': %s\n",
// 		res ? res : "NULL");
// 	// Teste 3: caractere que não aparece
// 	res = ft_strrchr(str, 'x');
// 	printf("Última ocorrência de 'x': %s\n",
// 		res ? res : "NULL");
// 	// Teste 4: busca por terminador '\0'
// 	res = ft_strrchr(str, '\0');
// 	printf("Busca por '\\0': %s\n",
// 		res ? "Encontrado terminador" : "NULL");
// 	return 0;
// }

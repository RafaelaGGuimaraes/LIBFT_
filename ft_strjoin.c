/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:41:31 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/29 20:14:45 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1 = NULL;
// 	char	*s2 = "São Paulo";
// 	char	*resultado;

// 	resultado = ft_strjoin(s1, s2);
// 	if (resultado)
// 	{
// 		printf("Resultado: %s\n", resultado);
// 		free(resultado);
// 	}
// 	else
// 	{
// 		printf("Erro ao alocar memória.\n");
// 	}
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:27:52 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/31 18:47:58 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:15:00 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/27 19:20:55 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	long int	nwnum;

	nwnum = num;
	if (nwnum < 0)
	{
		nwnum *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nwnum > 9)
		ft_putnbr_fd(nwnum / 10, fd);
	ft_putchar_fd(nwnum % 10 + '0', fd);
}

// int main()
// {
// 	ft_putnbr_fd(20, 2);
// 	ft_putnbr_fd(10, 1);

// 	return(0);
// }

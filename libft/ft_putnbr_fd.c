/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:54:32 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:11:58 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb * -1, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
}

//#include <stdio.h>
//
//int main()
//{
//	ft_putnbr_fd(-2147483648, 1);
//	return (0);
//}
//escribe el entero n en el descriptor de archivo fd.
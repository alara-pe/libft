/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:51:55 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:12:25 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index])
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
	ft_putchar_fd('\n', fd);
}

//#include <stdio.h>
//
//int main()
//{
//	ft_putendl_fd("pepe", 1);
//	return (0);
//}
//escribir en un string y agregar un salto de linea
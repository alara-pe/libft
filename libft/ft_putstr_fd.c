/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:49:50 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:11:46 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index])
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
}

//#include <fcntl.h>

//int main()
//{
//    int fd = open("output.txt", O_WRONLY);
//    char *str = "Hello, world!\n";
//    ft_putstr_fd(str, fd);
//    close(fd);
//    return 0;
//}

//escribe en un archivo el string que le pasas
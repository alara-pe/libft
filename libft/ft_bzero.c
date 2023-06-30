/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:35:11 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:15:03 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s1, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)s1;
	while (len-- > 0)
		*(string++) = 0;
}

//#include <stdio.h>
//int main(void)
//{
//    char str[10] = "PEPE";
//    size_t len = sizeof(str);
//    printf("Antes de llamar a ft_bzero: %s\n", str);
//    ft_bzero(str, len);
//    printf("Después de llamar a ft_bzero: %s\n", str);
//    return 0;
//}
//reservar memoria para len caracteres y ponerlos a 0
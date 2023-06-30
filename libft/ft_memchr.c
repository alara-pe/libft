/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:08:51 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:14:17 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s1;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

//#include <stdio.h>

//int main()
//{
//    char s1[] = "pepei";
//    printf("%s\n", ft_memchr(s1, 'i', 5));
//    printf("%s\n", memchr(s1, 'i', 5));
//    return (0);
//}
//busca el char en el string y devuelve un puntero.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:17:02 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:12:46 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s1, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)s1;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (s1);
}

//#include <stdio.h>

//int main()
//{

//	char s1[] = "pepe";
//	printf("%s\n", ft_memset(s1, 'a', 2));
//	printf("%s\n", memset(s1, 'a', 2));
//	return (0);
//}
//escribe en s1 los primeros len caracteres de c
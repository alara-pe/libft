/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:02:45 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:13:04 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *s1, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*s2;

	dest2 = (unsigned char *)dest;
	s2 = (unsigned char *)s1;
	if (dest == NULL && s1 == NULL)
		return (NULL);
	while (n-- > 0)
		*(dest2++) = *(s2++);
	return (dest);
}

//#include <stdio.h>

//int main()
//{
// 	char s1[] = "juanillo";
// 	char s2[] = "pepillo";
// 	printf("%s\n", ft_memcpy(s1, s2, 5));
// 	printf("%s\n", memcpy(s1, s2, 5));
// 	return (0);
//}
//copia la memoria de un lado a otro
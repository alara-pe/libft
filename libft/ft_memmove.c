/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:04:22 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:12:57 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *s1, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*s2;

	dest2 = (unsigned char *)dest;
	s2 = (unsigned char *)s1;
	if (dest == NULL && s1 == NULL)
		return (NULL);
	if (dest2 < s2)
	{
		while (n-- > 0)
			*(dest2++) = *(s2++);
	}
	else
	{
		dest2 += n - 1;
		s2 += n - 1;
		while (n-- > 0)
			*(dest2--) = *(s2--);
	}
	return (dest);
}

//#include <stdio.h>

//int main()
//{
// 	char s1[] = "pepillo";
// 	char s2[] = "juanillo";
// 	printf("%s\n", ft_memmove(s1, s2, 5));
// 	printf("%s\n", memmove(s1, s2, 5));
// 	return (0);
//}
//mueve la memoria de un lado a otro
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:10:06 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:13:34 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1 && ptr1[i] == ptr2[i])
		i++;
	return ((int)(ptr1[i] - ptr2[i]));
}

//#include <stdio.h>

//int main()
//{
// 	char s1[] = "29";
// 	char s2[] = "24";
// 	printf("%d\n", ft_memcmp(s1, s2, 3));
// 	printf("%d\n", memcmp(s1, s2, 3));
// 	return (0);
//}
//compara los primeros n bytes de la memoria de s1 y s2
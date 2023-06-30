/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:27:28 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:17:34 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

//#include <stdio.h>

//int main()
//{
// 	char s1[10] = "hola";
// 	char s2[10] = "adios";
// 	printf("%lu\n", ft_strlcat(s1, s2, 10));
// 	printf("%lu\n", strlcat(s1, s2, 10));
// 	return (0);
//}
//concatena s2 en s1, pero solo hasta size - 1
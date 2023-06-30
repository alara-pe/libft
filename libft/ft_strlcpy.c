/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:26:25 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:17:56 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *s1, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)s1);
	if (size == 0)
		return (len);
	while (s1[i] && i < size - 1)
	{
		dest[i] = (char)s1[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[10] = "hola";
// 	char s2[10] = "adios";
// 	printf("%lu\n", ft_strlcpy(s1, s2, 10));
// 	printf("%lu\n", strlcpy(s1, s2, 10));
// 	return (0);
// }
//copia s1 en s2, pero solo hasta size - 1
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:51:42 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:07:41 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(ft_strlen((char *)s1) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen((char *)s1) + 1);
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "juanillo";
// 	printf("%s\n", ft_strdup(s1));
// 	printf("%s\n", strdup(s1));
// 	return (0);
// }

//casigna memoria para una copia de s1, y devuelve un puntero a la copia
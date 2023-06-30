/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:31:57 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:16:03 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	char	*ptr;

	ptr = (char *)s1;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "juanillo";
// 	printf("%s\n", ft_strchr(s1, 'a'));
// 	printf("%s\n", strchr(s1, 'a'));
// 	return (0);
// }
//buscar el caracter c en la cadena s1
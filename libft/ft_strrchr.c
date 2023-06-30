/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:33:38 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:18:51 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s1;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "juanillo";
// 	printf("%s\n", ft_strrchr(s1, 'a'));
// 	printf("%s\n", strrchr(s1, 'a'));
// 	return (0);
// }
//busca el caracter c en la cadena s1 desde el final
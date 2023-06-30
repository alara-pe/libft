/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:11:13 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:18:40 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && find[j] && s1[i + j] == find[j] && i + j < len)
			j++;
		if (!find[j])
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char *s1 = "Hello World";
//     char *find = "World";
//     char *ptr = ft_strnstr(s1, find, 11);
//     printf("%s\n", ptr);

//     char *ptr2 = strnstr(s1, find, 11);
//     printf("%s\n", ptr2);
//     return (0);
// }
//busca la subcadena find en la cadena s1 hasta len caracteres 
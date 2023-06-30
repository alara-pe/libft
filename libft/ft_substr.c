/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:39:50 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:19:29 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*str;

	s1_len = ft_strlen(s1);
	if (start >= s1_len)
		return (ft_strdup(""));
	if ((s1_len - start) < len)
		len = s1_len - start;
	str = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s1[i] && j < len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>

//int main()
//{
//	char *s1 = "Hello World";
//	char *ptr = ft_substr(s1, 6, 5);
//	printf("%s\n", ptr);
//	return (0);
//}
//crea una nueva subcadena 
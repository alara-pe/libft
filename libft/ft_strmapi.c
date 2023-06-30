/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:02:07 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:18:08 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
//
// char print(unsigned int i, char s)
// {
// 	printf("%d %c\n", i, s);
// 	return (s);
// }

// int main()
// {
// 	char s1[] = "pepe";
// 	char *s2;
// 	s2 = ft_strmapi(s1, &print);
// 	printf("%s\n", s2);
// 	return (0);
// }
//aplica la funcion f a cada caracter de la cadena s1
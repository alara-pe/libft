/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:32:29 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:18:02 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "hola";
// 	printf("%lu\n", ft_strlen(s1));
// 	printf("%lu\n", strlen(s1));
// 	return (0);
// }
//devuelve la longitud de la cadena
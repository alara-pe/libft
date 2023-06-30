/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:06:30 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:10:53 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int i, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &(s[i]));
		i++;
	}
}

//#include <stdio.h>
//
//void print(unsigned int i, char *s)
//{
//	printf("%d %s\n", i, s);
//}
//
//int main()
//{
//	char s1[] = "pepe";
//	ft_striteri(s1, &print);
//	return (0);
//}
//comprueba que s y f no sean nulos
//itera sobre la cadena s aplicando la funcion f a cada caracter de la cadena
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:12:41 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:15:30 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s1)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*s1 == '\t' || *s1 == '\n' || *s1 == '\v' || *s1 == '\f'
		|| *s1 == '\r' || *s1 == ' ')
		s1++;
	if (*s1 == '-')
		sign = -sign;
	if (*s1 == '-' || *s1 == '+')
		s1++;
	while (*s1 && *s1 >= '0' && *s1 <= '9')
		result = result * 10 + (*s1++ - '0');
	return ((int)(result * sign));
}

//#include <stdio.h>

//int main(void)
//{
//    char str[] = "+11111";
//    int num = ft_atoi(str);
//    printf("La cadena \"%s\" convertida a entero es: %d\n", str, num);
//    return 0;
//}
//conviernte la cadena apuntada por str a un entero de tipo int.
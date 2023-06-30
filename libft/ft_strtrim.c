/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:17:26 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:19:06 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen(s1 + i);
		while (j > 0 && ft_strchr(set, s1[i + j - 1]))
			j--;
		str = ft_substr(s1, i, j);
	}
	return (str);
}

//#include <stdio.h>
//#include <stdlib.h>

//int main(void)
//{
//    char str[] = "   hola, juan   ";
//    char set[] = " ";
//    char *new_str = ft_strtrim(str, set);

//    if (new_str == NULL) {
//        printf("Error: no se pudo asignar memoria para la nueva cadena.\n");
//        return 1;
//    }

//    printf("Cadena original: \"%s\"\n", str);
//    printf("Cadena resultante: \"%s\"\n", new_str);

//    free(new_str);

//    return 0;
//}
//elimina los caracteres de la cadena set de la cadena s1
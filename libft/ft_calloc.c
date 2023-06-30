/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:05:03 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:15:18 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}

//#include <stdio.h>

//int main(void)
//{
//    char *str;
//    size_t nitems = 5;
//    size_t size = sizeof(char);

//    str = ft_calloc(nitems, size);
//    if (str == NULL) {
//        printf("No se pudo asignar memoria.\n");
//        return 1;
//    }

//    printf("El bloque de memoria asignado es: ");
//    for (size_t i = 0; i < nitems; i++) {
//        printf("%d ", str[i]);
//    }
//    printf("\n");

//    free(str);
//    return 0;
//}
//reservar memoria para nitems elementos de tamaño size y ponerlos a 0
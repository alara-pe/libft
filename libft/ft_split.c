/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:49:39 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/27 18:42:57 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)

{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}
//esta funcion creada cuenta las palabras 
// que se encuentran entre los espacios.

static int	ft_size_word(char const *s, char c, int i)

{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}
//esta funcion creada mide las palabras

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}
//esta funcion creada libera la memoria 

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!(strs))
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
			return (ft_free(strs, j), NULL);
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
//declaramos los contadores, la reserva de memoria y
//con la funcion count words sabemos cuantas palabras seran en total
//asi poder crear la memoria correctamente
//si la reserva de memoria 

//#include <stdio.h>

//void	ft_leaks(void)
//{
//	system("leaks -q a.out");
//}

//int main()
//{
//	char **ptr;
//	int i;
//	atexit(ft_leaks);
//	i = 0;
//	ptr = ft_split(" hola me llamo      pepe y	juan,antonio!luis", ' ');
//	while (ptr[i])
//	{
//		printf("%s\n", ptr[i]);
//		i++;
//	}
//	return (0);
//}
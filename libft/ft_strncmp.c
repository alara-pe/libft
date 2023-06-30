/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:06:18 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/30 10:18:16 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				res;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	res = 0;
	while (i < len)
	{
		if (ptr1[i] != ptr2[i])
		{
			res = (int)(ptr1[i] - ptr2[i]);
			return (res);
		}
		if (ptr1[i] == '\0' && ptr2[i] == '\0')
			return (0);
		i++;
	}
	return (res);
}

// int main()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Hello";
// 	printf("%d\len", ft_strncmp(s1, s2, 3));
// 	printf("%d\len", strncmp(s1, s2, 3));
// 	return (0);
// }
// compara los primeros n bytes de s1 y s2
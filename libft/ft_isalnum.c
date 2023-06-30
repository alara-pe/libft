/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:30:00 by alara-pe          #+#    #+#             */
/*   Updated: 2023/06/27 19:58:10 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('1'));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum('\n'));
// 	printf("%d\n", ft_isalnum('z'));
// 	printf("%d\n", ft_isalnum('Z'));
// 	return (0);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 06:18:06 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 17:02:51 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		*(ptr + i) = 0;
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
//     char name[] = "leon";
//     char name2[] = "simo";

//     ft_bzero(name, (signed)3);
//     bzero(name2, (signed)3);

//     printf("%s \n", name);
//     printf("%s \n", name2);
// }
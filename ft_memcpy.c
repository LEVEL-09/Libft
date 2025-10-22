/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 06:28:55 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/17 09:45:32 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char		*ptr;

	ptr = (unsigned char*)dest;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = *((unsigned char*)src + i);
		i++;
	}
	return ((unsigned char*)dest);
}

// #include <stdio.h>
// int main() 
// {
// 	int	x = 20;
// 	int	y = 10;

//     printf("Value of b before calling memcpy: %d\n", y);

//     ft_memcpy(&y, &x, sizeof(int)); 

//     printf("Value of b after calling memcpy: %d\n", y);
	

//     int a = 20;
//     int b = 10;
    
//     printf("Value of b before calling memcpy: %d\n", b);

//     memcpy(&b, &a, sizeof(int)); 

//     printf("Value of b after calling memcpy: %d\n", b);

//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 06:28:55 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 11:19:27 by mkhoubaz         ###   ########.fr       */
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
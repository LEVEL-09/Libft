/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:50:02 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 21:24:59 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *)dest;
	if (src < dest)
	{
		while (n-- > 0)
		{
			*(ptr + n) = *((unsigned char *)src + n);
		}
	}
	else
		ft_memcpy (dest, src, n);
	return ((unsigned char *)dest);
}

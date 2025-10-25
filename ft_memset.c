/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 06:17:07 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/25 07:55:49 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	if (b == NULL)
		return ((unsigned char *)b);

	ptr = (unsigned char *)b;
	i = 0;

	while (i < len)
	{
		*(ptr + i) = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)b);
}
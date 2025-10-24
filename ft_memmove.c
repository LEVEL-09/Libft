/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:58:48 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/17 08:40:23y mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *ptr;

    ptr = (unsigned char*)dest;
    while (n-- > 0)
    {
        *(ptr + n) = *((unsigned char*)src + n);
        
    }
    
    return ((unsigned char*)dest);
}
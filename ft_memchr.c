/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:21:02 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 11:19:36 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t      i;
    unsigned char *ptr;

    ptr = (unsigned char*)s;
    i = 0;
    while (ptr[i] && i < n)
    {
        if (*(ptr + i) == (unsigned char)c)     return ((unsigned char*)s + i);
        i++;
    }
    return (NULL); 
}
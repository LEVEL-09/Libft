/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:34:48 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/17 11:49:15 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char       *ptr;
    unsigned char       *ptr1;

    ptr = (unsigned char*)s1;
    ptr1 = (unsigned char*)s2;
    i = 0;
    
    while (i < n && (ptr[i] || ptr1[i]))
    {
        if (ptr1[i] != ptr[i])      return (ptr[i] - ptr1[i]);
        i++;
    }
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = "dw";
//     char s2[] = "sdasdsd";
//     printf("%d \n", ft_memcmp(s1, s2, (size_t)1));
    
//     printf("%d \n", memcmp(s1, s2, (size_t)1));
// }
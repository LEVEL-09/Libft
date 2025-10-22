/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:21:02 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/17 11:34:28 by mkhoubaz         ###   ########.fr       */
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

// #include <stdio.h>
// int main()
// {
//     char s[] = "leon";
//     char c = 'l';

//     printf("%s \n", (char *)ft_memchr(s, c , (size_t)3));

//     printf("%s \n", (char *)memchr(s, c , (size_t)3));
// }
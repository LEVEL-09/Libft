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
        //n--
        *(ptr + n) = *((unsigned char*)src + n);
        
    }
    
    return ((unsigned char*)dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "king";

//     ft_memmove(src+1, src, (size_t)3);

//     printf("%s \n", src);

//     char src1[] = "king";

//     memmove(src1+1, src1, (size_t)3);

//     printf("%s \n", src1);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 06:17:07 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/19 07:00:05 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
        size_t      i;
        unsigned char *ptr;
        
        if (b == NULL)      return ((unsigned char *)b);

        ptr = (unsigned char *)b;
        i = 0;

        while (i < len) // ptr[i]
        {
            *(ptr + i) = (unsigned char)c;
            i++;
        }
        return ((unsigned char *)b);
}

// #include <stdio.h>
// int main()
// {
//     // int num = 0;
//     // int x = 1337;

//     // // ft_memset((char *)&num, (char)x, 1);
//     // // // ft_memset((char *)&num + 1, (char)x, 1);
//     // // // ft_memset((char *)&num + 2, (char)x, 1);
//     // // // ft_memset((char *)&num + 3, (char)x, 1);
//     // printf("%d \n" ,num);

//     // char name = NULL;

//     // printf("%s \n", memset(NULL, 'r', 1));
//     printf("%s \n", ft_memset(NULL, 'r', 1));
// }
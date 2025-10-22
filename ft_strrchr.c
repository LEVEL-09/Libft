/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:50:01 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/16 08:21:44 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int     i;
    int     flag;
    int     point;

    i = 0;
    flag = 0;
    point = 0;
    while (s[i])
    {
        if (s[i] == (const char)c)
        {
            flag = 1;
            point = i;
        }
        i++;
    }
    if (s[i] == (const char)c)
        {
            flag = 1;
            point = i;
        }
    
    if (flag != 0)  return ((char *)s + point);
    else    return (NULL);
    
}

// #include <stdio.h>

// int main(void) {
//     char text[] = "Hello, world!";
//     char *ptr;
//     int search_char = 'o';

//     ptr = ft_strrchr(text, search_char);
//     //printf("%c \n", *ptr);

//     if (ptr != NULL) {
//         printf("Found null terminator. Character: '%c'\n", *ptr);
//         printf("The first occurrence of '%c' is at: %s\n", search_char, ptr);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char);
//     }

//     printf("\n"); //dsdsdsdsd
//     char text2[] = "Hello, world!";
//     char *ptr2;
//     int search_char2 = 'o';

//     ptr2 = strrchr(text2, search_char2);
//     // printf("%c \n", *ptr2);

//     if (ptr2 != NULL) {
//         printf("Found null terminator. Character: '%c'\n", *ptr2);
//         printf("The first occurrence of '%c' is at: %s\n", search_char2, ptr2);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char2);
//     }

// }
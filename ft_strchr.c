/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:24:15 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/15 21:27:12by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int     i;

    

    i = 0;
    while (s[i])
    {
        if (s[i] == (const char)c)      return ((char *)s + i);
        i++;

    }

    if (s[i] == (const char)c)      return ((char *)s + i);
    return (NULL);
}

#include <stdio.h>

// int main(void) {
//     char text[] = "Hello, world!";
//     char *ptr;
//     int search_char = '\0';

//     ptr = ft_strchr(text, search_char);
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
//     int search_char2 = '\0';

//     ptr2 = strchr(text2, search_char2);
//     // printf("%c \n", *ptr2);

//     if (ptr2 != NULL) {
//         printf("Found null terminator. Character: '%c'\n", *ptr2);
//         printf("The first occurrence of '%c' is at: %s\n", search_char2, ptr2);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char2);
//     }

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:43:28 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/16 10:24:38 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t      i;
    size_t      j;
    size_t      point;

    if (little[0] == '\0')     return ((char *)big);

    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        if (little[j] == big[i])    point = i;
        while (little[j] == big[i] && i < len)
        {
            // printf("%c", big[i]);
            if (!little[j])      return ((char *)big + point);
            j++;
            i++;
        }
        if (!little[j])      return ((char *)big + point);
        i++;
    }

    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     char name[] = "it'sworld out there";
//     char litter[] = "world";

//     printf("%s \n", ft_strnstr(name, litter, (size_t)10));

// }
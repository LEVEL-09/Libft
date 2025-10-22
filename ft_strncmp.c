/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:27:37 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/16 08:40:29by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t      i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])     return(s1[i] - s2[i]); // implicit casting 
        i++;
    }
    return (0);
}

// #include <stdio.h>

// int main()
// {
//     char name[] = "leon";
//     char name2[] = "leoq";

//     printf("%d \n", ft_strncmp(name, name2, (size_t)3));

//     printf("%d \n", strncmp(name, name2, (size_t)3));
// }
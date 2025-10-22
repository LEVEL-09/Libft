/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:41:34 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/21 09:36:24 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    int     i;
    int     len;

    if (!f || !s)
        return (NULL);

    len = ft_strlen(s); 
    ptr = malloc(sizeof(char) * (len + 1));
    if (!ptr)   return (NULL);

    i = 0;
    while (i < len) // 0 l ; 1 e; 2 o; 3 n
    {
        ptr[i] = (*f)(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
// char test(unsigned int x, char u)
// {
//     u = 'x';
//     return (u);
// }

// #include <stdio.h>
// int main()
// {
//     char (*f)(unsigned int, char);

//     f = &test;
//     printf("%s \n", ft_strmapi(NULL, f));
// }
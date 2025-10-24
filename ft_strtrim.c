/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:43:23 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 19:42:55 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short is_set(char c, char const *set)
{
    int     i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)    return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    int     i;
    int     len;
    int     end;

    len = ft_strlen(s1);
    i = 0;
    end = 0;

    if (!s1 || !set)
        return (NULL);

    while (is_set(s1[i], set))      i++; 

    while (is_set(s1[len - 1], set))
    {
        len--;
        end++;
    }
    
    len = ft_strlen(s1);
    ptr = malloc(sizeof(char) * (len - i - end));
    if (!ptr)       return (NULL);
    
    ft_memcpy(ptr, s1 + i, (len - i - end));

    return (ptr);
}
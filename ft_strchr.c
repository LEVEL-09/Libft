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
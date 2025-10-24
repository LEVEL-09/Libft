/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:16:03 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/19 13:38:58by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;

    if (s1 == NULL || *s1 == '\0')    return ((char*)s2);
    if (s2 == NULL || *s2 == '\0')    return ((char*)s1);

    ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!ptr)      return (NULL);

    ft_memcpy(ptr, s1, ft_strlen(s1));
    ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);

    return (ptr);
}
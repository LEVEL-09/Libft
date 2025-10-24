/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:10:20 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 11:18:10 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *p;

        p = (char *)malloc(sizeof(char) * len);
        if (!p)
                return (NULL);

        ft_memcpy(p, s + start, len);
        return (p);
}
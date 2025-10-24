/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:15:31 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 11:18:43 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int     i;
    int     len;

    if (!s || !f)
        return ;

    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        (*f)(i, &s[i]);
        i++;
    }
}
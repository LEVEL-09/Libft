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

	if (!s1[0])
		return (-1);

	if (n >= ft_strlen(s1))
	{
		return (1);
	}

    i = 0;
    while ((s1[i] && s2[i]) && i < n)
    {
        if (s1[i] != s2[i])     return(s1[i] - s2[i]);
        i++;
    }
    return (0);
}
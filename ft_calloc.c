/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:23:50 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/19 07:25:51 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t      total;

    if (!nmemb || !size)    return (malloc(0));

    if (nmemb > SIZE_MAX / size)     return (NULL);

    total = nmemb * size;
    ptr = malloc(total);
    if (!ptr)       return (NULL);
    
    memset(ptr, 0, total);
    return (ptr);
}
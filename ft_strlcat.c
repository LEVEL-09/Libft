/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:00:46 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/15 15:26:44y mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t      dst_len;
    size_t      i;
    size_t      src_len;
    size_t      old_dst_len;

    dst_len = ft_strlen((const char *)dst);
    old_dst_len = dst_len;
    src_len = ft_strlen(src);
    i = 0;

    if (size == 0)  return (src_len);

    while (src[i] && dst_len < size - 1)
    {
        dst[dst_len] = src[i];
        i++;
        dst_len++;
    }
    dst[dst_len] = '\0'; 
    return (old_dst_len + src_len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:43:28 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 11:54:14 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	i;
    size_t	j;
    size_t	find;

    if (!(*little))
        return ((char *)big);
    i = 0;
    while (i < len && big[i])
    {
        j = 0;
        if (big[i] == little[j])
        {
            find = i;
            while (i < len && little[j])
            {
                if (big[i] != little[j])
                {
                    i = find;
                    break;
                }
                else
                {
                    i++;
                    j++;
                }
            }
            if (!little[j])
                return ((char *)big + find);
        }
        i++;
    }
    return (NULL);
}
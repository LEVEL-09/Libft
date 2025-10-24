/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:10:20 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/24 19:23:49 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		ft_memcpy (p, s + start, len);
	}
	p[len + 1] = '\0';
	return (p);
}

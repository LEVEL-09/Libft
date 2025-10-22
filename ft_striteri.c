/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:15:31 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 16:29:23 by mkhoubaz         ###   ########.fr       */
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

// void test(unsigned int x, char* s)
// {
//     *s = 's';
// }

// #include <stdio.h>
// int main()
// {
//     char name[] = "leon";

//     void (*f)(unsigned int, char*);
//     f = &test;

//     ft_striteri(name, f);

//     printf("%s \n", name);
// }
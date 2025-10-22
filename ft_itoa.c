/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 06:56:06 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 17:20:20 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void my_putnbr(char *ptr, int n, int *i)
{
    if (n/10 != 0)
    {
        my_putnbr(ptr, n/10, i);
    }
    *i += 1;
    ptr[*(i)] = (n % 10) + '0';
}

char *ft_itoa(int n)
{
    // int     len;
    int     clone;
    int     i;
    int     neg;
    char    *ptr;
    int     j;

    if (n == -2147483648)
        return(ft_strdup("-2147483648"));
    if (n == 0)
        return(ft_strdup("0"));
    neg = 0;
    if (n < 0)
    {
        neg = 1;
        n *= -1;
    }
    i = 0;
    clone = n;
    while (clone != 0)
    {
        clone /= 10;
        i++;
    } 

    ptr = malloc(sizeof(char) * (i + neg + 1)); //+1 for \0
    if (!ptr)
        return (NULL);

    j = 0;
    if (neg == 1)
        ptr[j] = '-';
    else
        j = -1;
    my_putnbr(ptr, n, &j);
    ptr[j + 1] = '\0';
    return (ptr);
}

// #include <stdio.h>
// int main()
// {
//     char * a = ft_itoa(-2147483648);
//     if (!a)
//         return 0;
//     printf("%s",a);
//     free(a);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:29:45 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 16:20:56 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sp(char s)
{
	if (s == '\n' || s == '\t' || s == '\v'
		|| s == '\f' || s == '\r' || s == ' ')
		return (1);
	return (0);
}

static int	ft_overflow(int neg)
{
	if (neg < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	cont;
	long	overflow;

	i = 0;
	neg = 1;
	while (check_sp(str[i]))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i++] == 45)
			neg = -1;
	}
	cont = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		overflow = cont;
		cont *= 10;
		cont = cont + (str[i] - '0');
		if (overflow != cont / 10)
			return (ft_overflow(neg));
		i++;
	}
	return (cont * neg);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%s >> me: %d | ", "-9223372036854775808", ft_atoi("-9223372036854775808"));
// 	printf("sys: %d \n", atoi("-9223372036854775808"));

// 	printf("\n%s >> me: %d | ", "0", ft_atoi("0"));
// 	printf("sys: %d \n", atoi("0"));

// 	printf("\n%s >> me: %d | ", "-1", ft_atoi("-1"));
// 	printf("sys: %d \n", atoi("-1"));

// 	printf("\n%s >> me: %d | ", "2147483647", ft_atoi("2147483647"));
// 	printf("sys: %d \n", atoi("2147483647"));

// 	printf("\n%s >> me: %d | ", "-2147483648", ft_atoi("-2147483648"));
// 	printf("sys: %d \n", atoi("-2147483648"));

// 	printf("\n%s >> me: %d | ", "4294967296", ft_atoi("4294967296"));
// 	printf("sys: %d \n", atoi("4294967296"));

// 	printf("\n%s >> me: %d | ", "9223372036854775807", ft_atoi("9223372036854775807"));
// 	printf("sys: %d \n", atoi("9223372036854775807"));

// 	printf("\n%s >> me: %d | ", "18446744073709551616", ft_atoi("18446744073709551616"));
// 	printf("sys: %d \n", atoi("18446744073709551616"));

// 	printf("\n%s >> me: %d | ", "-18446744073709551616", ft_atoi("-18446744073709551616"));
// 	printf("sys: %d \n", atoi("-18446744073709551616"));
// 	//////

// 	printf("\n%s >> me: %d | ", "++++++++++++++++++++++1", ft_atoi("++++++++++++++++++++++1"));
// 	printf("sys: %d \n", atoi("++++++++++++++++++++++1"));

// 	printf("\n%s >> me: %d | ", "--------------------1", ft_atoi("--------------------1"));
// 	printf("sys: %d \n", atoi("--------------------1"));

// 	printf("\n%s >> me: %d | ", "                     123gg", ft_atoi("                     123gg"));
// 	printf("sys: %d \n", atoi("                     123gg"));

// 	printf("\n%s >> me: %d | ", "                     123gg123", ft_atoi("                     123gg123"));
// 	printf("sys: %d \n", atoi("                     123gg123"));

// 	printf("\n%s >> me: %d | ", "+-+-+-+-123", ft_atoi("+-+-+-+-123"));
// 	printf("sys: %d \n", atoi("+-+-+-+-123"));

// 	printf("\n%s >> me: %d | ", "-+-+-+-+123", ft_atoi("-+-+-+123"));
// 	printf("sys: %d \n", atoi("-+-+-+-+123"));

// 	ft_atoi(NULL);
// }

// 00000001
// 00000011

// 00000000
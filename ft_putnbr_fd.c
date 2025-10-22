/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:23:14 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 12:01:43 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	n = n + '0';
	write(fd, &n, 1);
}

// #include <fcntl.h>
// int main()
// {
//     int text = -1337;
//     int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         return (0);
//     }
//     ft_putnbr_fd(text, fd);
//     close(fd);
// }
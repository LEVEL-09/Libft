/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:03:26 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 09:06:48 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// int main()
// {
//     char text[] = "if you know you know but are sure you know? gg";
//     int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         return (0);
//     }
//     ft_putstr_fd(text, fd);
//     close(fd);
// }
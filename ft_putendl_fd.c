/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:07:16 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 13:11:20 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int len;

    if (!s)     
        return ;

    len = ft_strlen(s);    
    write(fd, s, len);
    write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
//     char text[] = "if you know you know but are sure you know? gg";
//     int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC);
//     if (fd < 0)
//     {
//         return (0);
//     }
//     ft_putendl_fd(text, fd);
//     close(fd);
// }
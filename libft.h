/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:45:01 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/22 17:30:33 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
size_t     ft_strlen(const char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:26:43 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/25 23:12:48 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ptr_free(char** ptr, int word)
{
    int     j;

    j = 0;
    while (j < word)
    {
        free(ptr[j]);
        j++;
    }
    free(ptr);
}

static int count_word(char const *s, char c)
{
    int     i;
    int     cont;
    
    i = 0;
    cont = 0;
    while (s[i])
    {
        while (s[i] == c)   i++;

        if (s[i])   cont++;

        while (s[i] && s[i] != c)   i++;
    }
    return (cont);
}

static char* storge(char const *s, int start, int end)
{
    char    *str;
    int     len;

    len = end - start;
    str = (char*)malloc(sizeof(char) * (len + 1));
    if (!str)      return (NULL);

    ft_memcpy(str, s + start, len);

    *(str + len) = '\0';
    return (str);
}

char **ft_split(char const *s, char c)
{
    char   **ptr;
    int     word;
    int     i;
    int     start;
    int     j;
    
    if (!s)
        return (NULL);

    j = 0;
    word = count_word(s, c);
    ptr = (char**)malloc(sizeof(char*) * (word + 1)); 
    if (!ptr) 
    {
        return (NULL);
    }

    i = 0;
    while (s[i] && j < word)
    {
        while (s[i] == c && s[i])       i++;
        start = i;

        while (s[i] != c && s[i])       i++;

        ptr[j] = storge(s, start, i);
        if (!ptr[j])
        {
            ptr_free(ptr, word);
            return (NULL);
        }
        j++;
    }
    
    ptr[j] = NULL;
    return (ptr);
}   

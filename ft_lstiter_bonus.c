/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:18:25 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 21:24:45 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{

     if (!lst || !f)
        return ;

    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}

// #include <stdio.h>
// void d(void *d)
// {
//     printf("%s \n", (char *)d);
// }
// int main()
// {
//    t_list *node = ft_lstnew("a"); 
//    t_list *node1 = ft_lstnew("b"); 
//    t_list *node2 = ft_lstnew("c"); 

//    node->next = node1;
//    node1->next = node2;
   
//    ft_lstiter(node, &d);
// }
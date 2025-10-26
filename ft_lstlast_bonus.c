/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:49:20 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 18:49:21 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int	i;

	i = ft_lstsize(lst) - 1;
	while (i-- > 0)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *node = ft_lstnew("one");
// 	t_list *node2 = ft_lstnew("two");
// 	t_list *node3 = ft_lstnew("three");
// 	t_list *node4 = ft_lstnew("foure");

// 	node->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;

// 	t_list *re_node = ft_lstlast(node);
// 	printf("%s \n", re_node->content);

// 	t_list *p;
// 	while (node)
// 	{
// 		p = node;
// 		node = node->next;
// 		free(p);
// 	}
// }
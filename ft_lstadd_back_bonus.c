/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:49:11 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 18:49:12 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}

	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *node = ft_lstnew("one");
// 	t_list *node2 = ft_lstnew("two");
// 	t_list *node3 = ft_lstnew("three");
// 	t_list *node4 = ft_lstnew("four");
// 	t_list *nodex = ft_lstnew("x");

// 	node->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;

// 	ft_lstadd_back(&node, nodex);

// 	t_list *p;
// 	while (node)
// 	{
// 		p = node;
// 		printf("%s \n", node->content);
// 		node = node->next;
// 		free(p);
// 	}

// 	// free(nodex);
// }
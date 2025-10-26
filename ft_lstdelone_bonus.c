/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoubaz <mkhoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:49:16 by mkhoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 18:49:17 by mkhoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del && lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// #include <stdio.h>
// void delet(void *date)
// {
// 	free(date);
// }

// int main()
// {
// 	void (*del)(void*);

// 	del = &delet;
// 	t_list *node = ft_lstnew("one");
// 	t_list *node2 = ft_lstnew("two");
// 	t_list *node3 = ft_lstnew("three");

// 	node->next = node2;
// 	node2->next = node3;

// 	t_list *p = node;
// 	while (p)
// 	{
// 		printf("before: %s \n", p->content);
// 		p = p->next;
// 	}
// 	ft_lstdelone(node, delet);
// 	t_list *p2 = node;
// 	while (p2)
// 	{
// 		printf("after: %s \n", p2->content);
// 		p2 = p2->next;
// 	}
// }
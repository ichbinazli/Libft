/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:28:37 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/27 15:32:53 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
	t_list *node1;
	t_list *node2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	
	node2 -> content = "naz";
	node2 -> next = 0;

	node1 -> content = "anap";
	node1 -> next = node2;

	printf("%d", ft_lstsize(node1));
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:52:35 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/27 14:54:28 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
	t_list *one;
	t_list *second;
	one = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));

	one -> content = "anapa";
	one -> next = NULL;

	second -> content = "nazli";

	ft_lstadd_front(&one, second);
	
	while(second)
	{
		printf("%s", second -> content);
		second = second -> next;
	}
*/

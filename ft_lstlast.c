/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:26:07 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/27 16:48:10 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
 int		main(void)
 {
	char	str1[] = "first element";
	char	str2[] = "last element";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*last_elem;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = NULL;

	elem1->content = (void *)str1;
	elem2->content = (void *)str2;
	last_elem = ft_lstlast(elem1);
	printf("%s", (char *)last_elem->content);
}
*/

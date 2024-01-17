/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:50:45 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/13 15:19:55 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
	int i = 0;
	int	sayac;
	int	*ptr;
	sayac = 10;
	ptr = ft_calloc(sayac, sizeof(int));
	while(i < sayac)
	{
		printf("%d\n", *ptr);
		i++;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:25:29 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/13 15:32:24 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((buffer1[i] == buffer2[i]) && i < n - 1)
		i++;
	return (buffer1[i] - buffer2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naanapa <naanapa@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:37:41 by naanapa           #+#    #+#             */
/*   Updated: 2023/12/14 13:24:37 by naanapa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (!*needle)
		return ((char *)haystack);
	a = 0;
	while (haystack[a] != '\0' && (size_t)a < len)
	{
		if (haystack[a] == needle[0])
		{
			b = 0;
			while (haystack[a + b] == needle[b] && a + b < len)
			{
				if (needle[b + 1] == '\0')
					return ((char *)&haystack[a]);
				b++;
			}
		}
		a++;
	}
	return (0);
}

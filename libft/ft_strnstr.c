/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:44:22 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/18 15:37:50 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t l;
	size_t m;

	l = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[l] && (l + ft_strlen(needle) <= len))
	{
		m = 0;
		while (haystack[l + m] == needle[m])
		{
			if (m == ft_strlen(needle) - 1)
				return ((char *)&haystack[l]);
			m++;
		}
		l++;
	}
	return (0);
}

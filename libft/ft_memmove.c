/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:02:26 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/13 15:08:09 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (s == d)
		return (dst);
	if (d > s)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dst);
}

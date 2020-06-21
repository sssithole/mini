/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:06:48 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/05 10:05:08 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*str;
	size_t	len;

	len = ft_strlen(s) + (1);
	chr = (char)c;
	str = (char *)s;
	while (len > 0)
	{
		len--;
		if (str[len] == chr)
		{
			return (str + len);
		}
	}
	return (0);
}

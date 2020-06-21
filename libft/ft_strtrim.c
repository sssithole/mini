/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:28:20 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/18 12:09:12 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*res;

	i = 0;
	j = 0;
	k = -1;
	if (*s == '\0')
		return (0);
	while ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' '))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	j = ft_strlen(s) - 1;
	while ((s[j] == '\t') || (s[j] == '\n') || (s[j] == ' '))
		j--;
	if (!(res = ft_strnew(j - i + 1)))
		return (NULL);
	while (++k < j - i + 1)
		res[k] = s[i + k];
	return (res);
}

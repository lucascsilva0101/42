/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:23:57 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:18:10 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*endstr;
	int		totlen;
	int		i;

	totlen = ft_strlen(s1) + ft_strlen(s2);
	endstr = (char *)malloc(sizeof(char) * totlen + 1);
	if (endstr == 0)
		return (NULL);
	i = 0;
	while (*s1)
	{
		endstr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		endstr[i] = *s2;
		i++;
		s2++;
	}
	endstr[i] = 0;
	return (endstr);
}

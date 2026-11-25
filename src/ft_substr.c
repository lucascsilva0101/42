/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:14:58 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:21:30 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (start > ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c) - start)
		len = ft_strlen(c) - start;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (subs == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = c[start];
		start++;
		i++;
	}
	subs[i] = 0;
	return (subs);
}

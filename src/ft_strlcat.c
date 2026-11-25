/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:39:50 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:19:20 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	start_len;

	i = ft_strlen(dst);
	c = 0;
	start_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[c] && i < size - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = 0;
	return (start_len + ft_strlen(src));
}

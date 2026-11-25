/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:10:47 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:18:45 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (!(ft_strncmp(big, little, strlen)) && len >= strlen)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

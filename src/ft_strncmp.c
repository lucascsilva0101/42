/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:59:14 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:14:19 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && j < n)
	{
		if (s1[j] != s2[j])
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
		j++;
	}
	if (j < n)
		return ((unsigned char)s1[j] - (unsigned char)s2[j]);
	return (0);
}

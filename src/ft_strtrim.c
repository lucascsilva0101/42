/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:49:43 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:20:10 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set || s1[0] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[i]))
		i++;
	while (ft_strrchr(set, (int)s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*
static char	*ft_strndup(const char *s, int start, int end)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = 0;
	return (dup);
}*/

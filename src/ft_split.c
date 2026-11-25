/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:28:13 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:14:10 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words_count(char const *str, char c);
static int		word_len(char const *str, char c);
static char		**ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = ft_calloc((words_count(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_substr(s, i, word_len(&s[i], c));
			if (!result[j])
				return (ft_free(result, j));
			j++;
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	result[j] = 0;
	return (result);
}

static char	**ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	words_count(char const *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			count++;
			x = 1;
		}
		else if (*str == c)
		{
			x = 0;
		}
		str++;
	}
	return (count);
}

static int	word_len(char const *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len++;
		}
		else if (str[i] == c)
			break ;
		i++;
	}
	return (len);
}

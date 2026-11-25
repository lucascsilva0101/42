/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:50:30 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:31:26 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, const char delim)
{
	int	count;
	int	x;
	int	i;

	count = 0;
	x = 0;
	i = 0;
	while (str[i] == delim)
		i++;
	while (str[i])
	{
		if (str[i] != delim && x == 0)
		{
			count++;
			x = 1;
		}
		else if (str[i] == delim)
		{
			x = 0;
		}
		i++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:50:30 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:30:52 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((ptr[i] >= '\t' && ptr[i] <= '\r') || ptr[i] == ' ')
	{
		i++;
	}
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ptr[i] && ptr[i] >= 48 && ptr[i] <= 57)
	{
		result = result * 10 + ptr[i] - 48;
		i++;
	}
	return (result * sign);
}

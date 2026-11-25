/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassil <lucassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:50:30 by lucassil          #+#    #+#             */
/*   Updated: 2026/11/25 12:30:56 by lucassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[7] = "Markos";

	ft_bzero(str+1, 3*sizeof(char));
	printf("string after ft_bzero(): %s\n", str);
	int i = 0;
	while (i < 6)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
*/

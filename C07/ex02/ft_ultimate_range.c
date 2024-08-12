/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:40:16 by ilallali          #+#    #+#             */
/*   Updated: 2024/08/12 19:43:17 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*p;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	p = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (size);
}

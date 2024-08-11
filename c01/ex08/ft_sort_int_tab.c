/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:58:13 by ilallali          #+#    #+#             */
/*   Updated: 2024/07/27 21:25:10 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b )
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	size -= 1;
	while (i < size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], tab[j]);
			}
			j++;
		}
		i++;
	}
}

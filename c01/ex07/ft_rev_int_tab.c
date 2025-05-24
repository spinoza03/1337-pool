/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:27:36 by ilallali          #+#    #+#             */
/*   Updated: 2024/07/28 12:15:33 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b )
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n9s;
	int	i;

	n9s = size - 1;
	i = 0;
	while (i < n9s)
	{
		ft_swap(&tab[i], &tab[n9s]);
		i++;
		n9s--;
	}
}

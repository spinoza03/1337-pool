/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:38:08 by ilallali          #+#    #+#             */
/*   Updated: 2024/08/10 15:47:48 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	p;

	p = ac -1;
	while (ac > p && p > 0)
	{
		i = 0;
		while (av[p][i])
		{
			write(1, &av[p][i], 1);
			i++;
		}
		write (1, "\n", 1);
		p--;
	}
}

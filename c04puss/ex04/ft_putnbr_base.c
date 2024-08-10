/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:24:19 by ilallali          #+#    #+#             */
/*   Updated: 2024/08/08 12:34:55 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	check(char *base)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = len(base);
	if (l <= 1)
		return (0);
	while (base[i])
	{
		j = i +1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	int		er;
	long	nb;

	l = len(base);
	nb = nbr;
	er = check(base);
	if (er == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < l)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= l)
		{
			ft_putnbr_base(nb / l, base);
			ft_putnbr_base(nb % l, base);
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoujana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:42:50 by ctoujana          #+#    #+#             */
/*   Updated: 2024/07/28 15:42:52 by ctoujana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	base_line(int width)
{
	int	x;

	x = 1;
	ft_putchar('A');
	while (x <= width - 2)
	{
		ft_putchar('B');
		x++;
	}
	if (width > 1)
		ft_putchar('A');
	ft_putchar('\n');
	return ;
}

void	mid_line(int width)
{
	int	x;

	x = 1;
	ft_putchar('B');
	while (x <= width - 2)
	{
		ft_putchar(' ');
		x++;
	}
	if (width > 1)
		ft_putchar('B');
	ft_putchar('\n');
	return ;
}

void	lower_line(int width)
{
	int	x;

	x = 1;
	ft_putchar('C');
	while (x <= width - 2)
	{
		ft_putchar('B');
		x++;
	}
	if (width > 1)
		ft_putchar('C');
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int	b;

	b = 1;
	base_line(x);
	while (b <= y - 2)
	{
		mid_line(x);
		b++;
	}
	if (y == 1)
		return ;
	lower_line(x);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoujana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:41:45 by ctoujana          #+#    #+#             */
/*   Updated: 2024/07/28 17:54:39 by ctoujana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_num(long long a, long long b)
{
	if (a > INT_MAX || a <= 0 || b > INT_MAX || b <= 0)
	{
		write(1, "Only positive, non-zero numbers and", 35);
		write(1, " less than 151 are accepted.\n", 29);
		return (0);
	}
	else if (a > 150 || b > 150)
	{
		write(1, "Please Put x and y less or Equal than 150\n", 42);
		return (0);
	}
	return (1);
}

int	check_num_no_limit(long long a, long long b)
{
	if (a > INT_MAX || a <= 0 || b > INT_MAX || b <= 0)
	{
		write(1, "Only positive, non-zero numbers are accepted.\n", 46);
		return (0);
	}
	return (1);
}

long long	ft_atoll_costumized(char *str)
{
	int				i;
	int				sign;
	long long		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_strlen(str) - i > 12)
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (0);
	return (result * sign);
}

int	main(int ac, char **av)
{
	long long	a;
	long long	b;

	if (ac == 3)
	{
		a = ft_atoll_costumized(av[1]);
		b = ft_atoll_costumized(av[2]);
		if (check_num(a, b) == 0)
			return (0);
		rush(a, b);
		return (0);
	}
	if (ac == 4 && av[3][0] == '1' && ft_strlen(av[3]) == 1)
	{
		a = ft_atoll_costumized(av[1]);
		b = ft_atoll_costumized(av[2]);
		if (check_num_no_limit(a, b) == 0)
			return (0);
		rush(a, b);
		return (0);
	}
	write(1, "You must enter 2 arguments.\n", 28);
	return (0);
}

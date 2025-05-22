/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:42:34 by ilallali          #+#    #+#             */
/*   Updated: 2024/07/30 15:17:02 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	ft_strlowcase (str);
	count = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (count == 1)
			{
				str[i] -= 32;
				count = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			count = 0;
		}
		else
			count = 1;
		i++;
	}
	return (str);
}

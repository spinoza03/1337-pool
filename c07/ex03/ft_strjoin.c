/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:31:56 by ilallali          #+#    #+#             */
/*   Updated: 2024/08/12 20:07:01 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*scat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*join;
	int		l;

	l = 0;
	i = 0;
	while (i < size)
	{
		l += len(strs[i]);
		i++;
	}
	l += len(sep) * (size - 1) + 1;
	join = malloc(l * sizeof(char));
	if (!join)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		scat(join, strs[i]);
		if (i < size - 1)
			scat(join, sep);
		i++;
	}
	return (join);
}

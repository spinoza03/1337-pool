/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:15:47 by iallali           #+#    #+#             */
/*   Updated: 2023/08/30 19:23:39 by iallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)

{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	if (length (dest) < size)
		result = length (dest) + length (src);
	else
		result = size + length(src);
	if (size == 0)
		return (result);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && size - 1 > i)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (result);
}

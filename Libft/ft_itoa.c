/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:59:59 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 12:09:43 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	abs_value(long int value)
{
	if (value < 0)
		return (-value);
	return (value);
}

static int	get_len(int value)
{
	int	len;

	len = 0;
	if (value <= 0)
		len++;
	while (value)
	{
		len++;
		value /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		len;

	len = get_len(nbr);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	result[--len] = '0';
	if (nbr < 0)
		result[0] = '-';
	while (nbr)
	{
		result[len--] = (abs_value(nbr) % 10) + '0';
		nbr /= 10;
	}
	return (result);
}

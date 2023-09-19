/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:22:40 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/14 14:22:42 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sgn;

	sgn = 1;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if ((*nptr < 48 && *nptr > 57) && (*nptr != 45) && (*nptr != 43))
		return (0);
	if ((*nptr == 45) || (*nptr == 43))
	{
		if (*nptr == 45)
			sgn *= (-1);
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		result *= 10;
		result += *nptr - '0';
		nptr++;
	}
	return (sgn * result);
}

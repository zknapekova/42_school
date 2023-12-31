/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:09:25 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/16 14:09:29 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb_long;

	nb_long = (long) n;
	if (nb_long < 0)
	{
		ft_putchar_fd('-', fd);
		nb_long = nb_long * (-1);
	}
	if (nb_long >= 0 && nb_long < 10)
		ft_putchar_fd(nb_long + '0', fd);
	else if (nb_long >= 10)
	{
		ft_putnbr_fd(nb_long / 10, fd);
		ft_putnbr_fd(nb_long % 10, fd);
	}
}

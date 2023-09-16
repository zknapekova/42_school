/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:28:07 by zknapeko          #+#    #+#             */
/*   Updated: 2023/06/05 11:28:15 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size)
	{
		size--;
		while (size)
		{
			if (src[i] && size)
				dest[i] = src[i];
			else
				dest[i] = '\0';
			i++;
			size --;
		}
		dest[i] = '\0';
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:36:39 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 19:25:11 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_char;
	char	*src_char;

	dest_char = (char *)dest;
	src_char = (char *)src;
	if (src > dest)
	{
		while (n-- > 0)
			*(dest_char++) = *(src_char++);
	}
	else
	{
		dest_char = (dest_char + n - 1);
		src_char = (src_char + n - 1);
		while (n-- > 0)
			*(dest_char--) = *(src_char--);
	}
	return (dest);
}

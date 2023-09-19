/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:32:48 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 19:28:02 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_char;
	char	*src_char;

	dest_char = (char *)dest;
	src_char = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n != 0)
	{
		*(dest_char++) = *(src_char++);
		n--;
	}
	return (dest);
}

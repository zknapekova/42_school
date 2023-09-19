/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:48 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 14:27:37 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*result;
	size_t			len;

	len = ft_strlen((char *)s);
	result = (char *)s + len;
	if (c == '\0')
		return (result);
	while (result >= s)
	{
		if (*result == (char)c)
			return (result);
		result--;
	}
	return (0);
}

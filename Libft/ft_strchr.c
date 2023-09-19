/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:13:45 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/07 19:28:49 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	while (*result)
	{
		if (*result == (unsigned char)c)
			return (result);
		result++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}

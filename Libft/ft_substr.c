/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:29:09 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 17:15:55 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len)
	{
		result = (char *)malloc(sizeof(char) * 1);
		if ((!result))
			return (NULL);
		result[0] = '\0';
	}
	else
	{
		if (len > ft_strlen(s + start))
			len = ft_strlen(s + start);
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (!result)
			return (NULL);
		ft_strlcpy(result, s + start, len + 1);
	}
	return (result);
}

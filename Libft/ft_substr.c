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
/*
PARAMETERS: 
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
RETURN VALUE: The substring. NULL if the allocation fails.
DESCRIPTION: 
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;
	size_t	str_len;

	str_len = ft_strlen(s);
	i = 0;
	if (start >= str_len || (len == 0))
	{
		result = (char *)malloc(sizeof(char) * 1);
		if ((!result))
			return (NULL);
	}
	else
	{
		result = (char *)malloc(sizeof(char) * (len + 1));
		if ((!result))
			return (NULL);
		while (len - i > 0)
			result[i++] = s[start++];
	}
	result[i] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:23:22 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 15:54:14 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
PARAMETERS: 
s1: The prefix string
s2: The suffix string.
RETURN VALUE: The new string. NULL if the allocation fails.
DESCRIPTION: 
Allocates (with malloc(3)) and returns a new string, which is the result of 
the concatenation of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	i = 0;
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if ((!result) || ((len1 == 0) && (len2 == 0)))
		return (NULL);
	while (len1 - i > 0)
	{
		result[i] = s1[i];
		i++;
	}
	while (len2 - (i - len1) > 0)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[i] = '\0';
	return (result);
}

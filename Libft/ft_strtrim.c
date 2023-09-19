/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:55:03 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 16:43:58 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim(char *str, char const *set)
{
	size_t	start_index;
	size_t	end_len;
	size_t	j;

	start_index = 0;
	end_len = ft_strlen(str);
	j = 0;
	while (str && set[j])
	{
		if (str[start_index] == set[j])
		{
			start_index++;
			j = 0;
		}
		else if (str[end_len - 1] == set[j])
		{
			j = 0;
			end_len--;
		}
		else
			j++;
	}
	return (ft_substr(str, start_index, end_len - start_index));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	return (ft_trim((char *)s1, set));
}

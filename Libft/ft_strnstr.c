/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:17:33 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/13 17:17:35 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;

	i = 0;
	j = 0;
	lit_len = ft_strlen(little);
	if (!lit_len)
		return ((char *)big);
	while (len > i && big[i])
	{
		if (big[i] == little[j])
		{
			if (j == (lit_len - 1) && (len > i))
				return ((char *)big + i - j);
			j++;
		}
		else if (big[i] != little[j] && j > 0)
		{
			i -= j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

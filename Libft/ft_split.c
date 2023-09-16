/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:40:59 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 17:48:24 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_substrings(char const *s, char del)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == del)
			s++;
		if (*s && *s != del)
			count++;
		while (*s && *s != del)
			s++;
	}
	return (count);
}

static size_t	ft_del_index(char const *s, char c)
{
	size_t	index;

	index = 0;
	while (*s)
	{
		if (*s != c)
			index++;
		else
			return (index);
		s++;
	}
	if (index == 0)
		index = ft_strlen(s);
	return (index);
}

static char	**free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		i;

	i = 0;
	count = ft_count_substrings(s, c);
	result = (char **) malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = ft_substr(s, 0, ft_del_index(s, c));
			if (!(result[i]))
				free_array(result);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	result[i] = NULL;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:40:59 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 17:19:43 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static int	ft_count_substrings(char const *s, char del)
{
	int	count;

	count = 0;	
	while(*s)
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

static int	ft_first_occur(char const *s, char c)
{
	int	index;

	index = 0;	
	while(*s)
	{
		if (*s != c)
			index++;
		else
			return (index);
		s++;
	}
	return (-1);
}

char    **ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		del_index;	
	
	count = ft_count_substrings(s, c);
	result = (char **)malloc(sizeof(char*) * count);
	if ((!result))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			del_index = ft_first_occur(s, c);
			if (del_index < 0)
				del_index = ft_strlen((char *)s);		
			*result = ft_substr(s, 0, del_index);
			printf("result: %s\n", ft_substr(s, 0, del_index));
			result++;
		}
		while (del_index-- > 0)
			s++;
		printf("reminds: %s\n", s);	
	}
	result = NULL;
	return (result);
}

int	main(void)
{
	char	**tab;
	const char str[] = "abc111def1ghi11";
	tab = ft_split(str, '1');
	printf("%c", tab[0]);
	return (0);
}

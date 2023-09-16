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

static char	*ft_remove_char(char *s, size_t index)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	while (i < len)
	{
		if (i != index)
			result[j++] = s[i++];
		else
			i++;
	}
	result[j] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	char	*s1_str;

	s1_str = (char *)s1;
	j = 0;
	while (s1_str && set[j])
	{
		if (s1_str[0] == set[j])
		{
			s1_str = ft_remove_char(s1_str, 0);
			j = 0;
		}
		else if (s1_str[ft_strlen(s1_str) - 1] == set[j])
		{
			s1_str = ft_remove_char(s1_str, ft_strlen(s1_str) - 1);
			j = 0;
		}
		else
			j++;
	}
	return (s1_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	char	set[]="av";
	char	*result;
	result = ft_strtrim(str, set);
	printf("res:%s", result);
}*/

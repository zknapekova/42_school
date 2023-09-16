/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:07:22 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/11 14:07:25 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			n;
	unsigned int	i;

	i = 0;
	n = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result || n == 0)
		return (NULL);
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include<stdio.h>
char	ft_toupper2(unsigned int n, char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	n += 1;
	
	return (c);
}

int	main(void)
{
	const char str[] = "";
	char	*res;
	res = ft_strmapi(str, ft_toupper2);
	printf("%s", res);
	return (0);
	
}*/

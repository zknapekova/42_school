/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:39:22 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/16 13:39:29 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (*f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
/*
#include <stdio.h>
void	ft_toupper2(unsigned int n, char* c)
{
	*c = 'b';		
	n += 0;
}
int	main(void)
{

	char str[] = "abcd";

	ft_striteri(str, ft_toupper2);
	printf("%s\n", str);
}*/

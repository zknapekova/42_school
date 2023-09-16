/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:28:50 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/13 13:28:51 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;

	s_char = (unsigned char *)s;
	while (n--)
	{
		if (*s_char == (unsigned char)c)
			return (s_char);
		s_char++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "aa.aab";
   const char ch = '.';
   char *ret;
   char *ret2;

   ret = ft_memchr(str, ch, strlen(str));
   ret2 = memchr(str, ch, strlen(str));

   printf("ft: String after |%c| is - |%s|\n", ch, ret);
   printf("or: String after |%c| is - |%s|\n", ch, ret2);

   return(0);
}*/

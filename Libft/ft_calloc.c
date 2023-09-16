/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:45 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/14 14:58:47 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(size * nmemb);
	if (!result || (size * nmemb) == 0)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}
/*
#include<stdio.h>
int	main(void)
{
	void	*p;
	
	p = ft_calloc(213456789, 21345987);
	if (!p)
		printf("fail");
	return (0);
}*/

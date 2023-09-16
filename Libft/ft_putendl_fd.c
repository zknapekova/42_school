/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:49:50 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/16 13:49:56 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int	main(void)
{
	int	fd;
	char s[] = "abc";
	fd = open("file5.txt", O_WRONLY | O_CREAT, 0666);
	ft_putendl_fd(s, fd);
	printf("%d", fd);
	close(fd);
}*/

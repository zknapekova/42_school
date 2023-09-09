/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:48 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 14:27:37 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen((char *)s);
    while (len > 0)
    {
        if (s[len] == c)
            return (char *)&s[len + 1];
        len--;
    }
    return (0);
}



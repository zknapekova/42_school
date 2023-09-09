/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:36:39 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/07 18:04:24 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, int n)
{
    char    *dest_char;
    char    *temp_char;
    char    temp[n];

    ft_memcpy(temp, src, n);
    dest_char = (char*)dest;
    temp_char = (char*)temp;
    while(n-- > 0)
        *dest_char++ = *temp_char++;
    return dest;
}

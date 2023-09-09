/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:32:48 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 13:30:49 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memcpy(void *dest, const void *src, int n)
{
    char    *dest_char;
    char    *src_char;

    dest_char = (char*)dest;
    src_char = (char*)src;
    while(n > 0)
    {
        *(dest_char++) = *(src_char++);
        n--;
    }
    return dest;
}

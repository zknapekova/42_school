/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zknapeko <zknapeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:17:47 by zknapeko          #+#    #+#             */
/*   Updated: 2023/09/09 16:44:05 by zknapeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int ft_isalpha(char c);
int ft_isdigit(int  n);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_strlen(char *str);
void *ft_memset(void *str, int c, int n);
void ft_bzero(void *s, int n);
void *ft_memcpy(void *dest, const void *src, int n);
void *ft_memmove(void *dest, const void *src, int n);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif

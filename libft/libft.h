/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:22:18 by kmuenda           #+#    #+#             */
/*   Updated: 2018/05/31 15:30:23 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>

char	*ft_strcat(char *s1, const char *s2)
char	*ft_strrchr(const char *s, int c)
char	*ft_strstr(const *haystack, const char *needle)
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
char	*ft_strchr(const char *s, int c)
char	*ft_strncpy(char *s1, const char *s2, size_t n)
char	*ft_strncpy(char *dst, const char *src, size_t len)
char	*ft_strcpy(char *dst, const char *src)
char	*ft_strdup(const char *s1)
char	*ft_strcat(char *s1, const char *s2)
void	*ft_memset(void *b, int c, size_t len)
void	ft_bzero(void *s, size_t n)
void	*ft_memcpy(void *dst, const void *src, size_t n)
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
void	*ft_mmemove(void *dst, const void *src, size_t len)
void	*ft_memchr(const void *s, int c, size_t n)
int		ft_strcmp(const char *s1, const char *s2)
int		ft_strncmp(const char *s1, const char *s2, size_t n)
int		ft_memcmp(const void *s1, const void *s2, size_t n)
int		ft_atoi(const char *str)
int		ft_isalpha(int c)
int		ft_isdigit(int c)
int		ft_isalnum(int c)
int		ft_isascii(int c)
int		ft_isprint(int c)
int		ft_toupper(int c)
int		ft_tolower(int c)
size_t	ft_strnlen(const char  *s)
size_t	ft_strlcat(char *dst, const char (*src, size_t dstsize)

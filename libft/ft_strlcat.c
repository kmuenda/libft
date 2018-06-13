/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:14:57 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/11 16:10:50 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*k;
	char	*p;
	size_t	j;

	k = (char *)ft_memchr(dst, '\0', size);
	if (k == NULL)
		return (size + ft_strlen(src));
	p = (char *)src;
	j = (size_t)(k - dst) + ft_strlen(p);
	while ((size_t)(k - dst) < size - 1 && *p != '\0')
	{
		*k = *p;
		k++;
		p++;
	}
	*k = '\0';
	return (j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:44:33 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/09 13:49:03 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		if (destination[i] == (unsigned char)c)
			return (destination + 1 + i);
		i++;
	}
	return (NULL);
}

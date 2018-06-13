/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:22:07 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/12 15:23:34 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *p_str;

	p_str = (unsigned char*)str;
	while (n-- > 0)
	{
		if (*p_str == (unsigned char)c)
			return (p_str);
		p_str++;
	}
	return (NULL);
}

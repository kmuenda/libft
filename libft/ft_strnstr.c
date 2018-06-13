/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:35:18 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/11 16:25:34 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	if (*small == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && (i + j) < len)
		{
			j++;
			if (small[j] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}

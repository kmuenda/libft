/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:21:35 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/09 14:46:40 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last_occurance;

	i = 0;
	last_occurance = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurance = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		last_occurance = (char *)&s[i];
	return (last_occurance);
}

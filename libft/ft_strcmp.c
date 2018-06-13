/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:33:18 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/11 11:44:57 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *str1, const char *str2)
{
	int				i;
	int				j;
	unsigned char	*s1;
	unsigned char	*s2;

	i = ft_strlen(str1);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (ft_strlen(str1) < ft_strlen(str2))
		i = ft_strlen(str2);
	j = 0;
	while (i > 0)
	{
		if (s1[j] > s2[j])
			return (s1[j] - s2[j]);
		else if (s1[j] < s2[j])
			return (s1[j] - s2[j]);
		i--;
		j++;
	}
	return (0);
}

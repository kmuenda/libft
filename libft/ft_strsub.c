/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:11:17 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/11 11:11:43 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	indexstart;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	indexstart = 0;
	while (indexstart < len)
	{
		str[indexstart] = s[start + indexstart];
		indexstart++;
	}
	str[indexstart] = '\0';
	return (str);
}

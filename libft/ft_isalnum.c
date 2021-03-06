/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:50:31 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/09 15:25:15 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
	|| ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:14:08 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/11 10:20:59 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*memory;

	if ((memory = (void*)malloc(size)) && size)
	{
		ft_bzero(memory, size);
		return (memory);
	}
	return (NULL);
}

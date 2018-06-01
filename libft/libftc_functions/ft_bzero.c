/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:50:40 by kmuenda           #+#    #+#             */
/*   Updated: 2018/05/28 16:13:46 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
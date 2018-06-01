/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:45:08 by kmuenda           #+#    #+#             */
/*   Updated: 2018/05/30 12:11:49 by kmuenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strchr(const char *s, int c)
{
	char	temp;
	char	*temp1
	int				i;

	i = 0;
	temp1 = (char*)s
	temp  = c;
	while (alts[i] != temp)
	{
		if (temp[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char*)temp1 +1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:57:47 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/01 19:38:41 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*b;
	size_t				i;

	i = 0;
	b = str;
	while (i < n)
	{
		if (b[i] == c)
			return (void *)&b[i];
		i++;
	}
	return (0);
}

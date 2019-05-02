/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:59:37 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/01 19:29:16 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	char	*c;

	i = 0;
	c = dest;
	while (dest[i])
	{
		c++;
		i++;
	}
	while (n--)
		*c++ = *src++;
	return (dest);
}

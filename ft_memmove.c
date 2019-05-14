/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:08:49 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/14 16:09:03 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	unsigned const char	*s;
	unsigned int		i;

	i = 0;
	p = dest;
	s = src;
	if (p == NULL && s == NULL)
		return (dest);
	if (p < s)
	{
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	else if (p > s)
	{
		while (n--)
		{
			p[n] = s[n];
		}
	}
	return (dest);
}

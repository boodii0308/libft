/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:22:08 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/01 19:37:28 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*p;
	unsigned const char *s;

	p = s1;
	s = s2;
	while (n-- != 0)
	{
		if ((*p++ = *s++) == c)
			return (p);
	}
	return (0);
}

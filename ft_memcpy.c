/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:12:57 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/14 20:37:50 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*p;
	const char		*s;

	p = str1;
	s = str2;
	if (n != 0 && str1 == NULL && str2 == NULL)
		return (NULL);
	else if (n == 0 || (n == 1 && str1 == '\0'))
		return (str1);
	else if ((ft_memcmp(str1, str2, n)) == 0 && (str1 != NULL && str2 != NULL))
		return (str1);
	else if (str1 == NULL && str2 == NULL)
		return (NULL);
	else
	{
		while (n--)
		{
			p[n] = s[n];
		}
		return (str1);
	}
}

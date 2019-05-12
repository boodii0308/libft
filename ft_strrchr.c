/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:15:28 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/09 23:20:53 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *r;
	char i;

	r = (char *)0;
	while (*str)
	{
		i = *str;
		if (i == c)
			r = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char*)str);
	return (r);
}

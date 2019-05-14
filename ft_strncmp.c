/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:03:04 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/13 15:38:04 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
		else if (*s1 != *s2)
			return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
		else if (*s1 == '\0')
			return (0);
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
	return (0);
}

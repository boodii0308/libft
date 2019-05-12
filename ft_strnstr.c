/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:03:37 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/11 18:20:00 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		j;
	size_t		i;
	const char	*c;

	i = 0;
	c = s2;
	if (*s2 == '\0')
		return ((char *)s1);
	else if (*s1 == '\0')
		return (NULL);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i] == s2[j] && i < n)
		{
			j++;
			i++;
			if (s2[j] == '\0')
				return (char *)&s1[i - j];
			else if (i == n)
				return (NULL);
		}
		i++;
	}
	return (NULL);
}

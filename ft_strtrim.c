/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:58:13 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/10 19:16:03 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	back(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (ft_isitspace(s[i]))
		i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		g;
	char	*c;

	i = 0;
	g = 0;
	len = back(s);
	while (ft_isitspace(s[i]))
	{
		i++;
		if (s[i] == '\0')
			len = i;
	}
	if (!(c = (char*)malloc(sizeof(char) * (len + 2) - i)))
		return (0);
	while (i <= len)
	{
		c[g] = s[i];
		i++;
		g++;
	}
	c[g] = '\0';
	return (c);
}
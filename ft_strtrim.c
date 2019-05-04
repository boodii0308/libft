/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:58:13 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/03 23:11:17 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		g;
	char	*c;

	i = 0;
	g = 0;
	len = 0;
	while (s[len])
		len++;
	len--;
	while (ft_isitspace(s[len]))
		len--;
	while (ft_isitspace(s[i]))
		i++;
	if (!(c = (char*)malloc(sizeof(char) * (len - i) + 1)))
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

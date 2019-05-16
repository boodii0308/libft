/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 20:41:02 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/15 20:57:09 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *s)
{
	char	*n;
	int		i;

	i = 0;
	n = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			n[i] = s[i] - 32;
		else
			n[i] = s[i];
		++i;
	}
	n[i] = '\0';
	return (n);
}

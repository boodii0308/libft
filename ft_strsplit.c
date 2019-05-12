/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:36:16 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/10 18:41:13 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lenght(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (j == 0 && s[j] != c)
			i++;
		if (s[j] == c && s[j + 1] != c && s[j + 1] != '\0')
			i++;
		j++;
	}
	return (i);
}

static int		len(const char *s, char n, int j)
{
	int i;

	i = 0;
	while (s[j + i] != n)
		i++;
	return (i);
}

static int		useless(const char *s, char c, int j)
{
	int i;

	i = 0;
	while (s[j + i] == c)
		i++;
	return (j + i);
}

static int		split(char **t, const char *s, int *ij, char c)
{
	int m;
	int l;
	int n;

	m = 0;
	n = useless(s, c, J);
	l = len(s, c, n);
	if (!(t[I] = (char*)malloc(sizeof(char) * l + 1)))
		return (0);
	while (m < l)
	{
		t[I][m] = s[n + m];
		m++;
	}
	t[I][m++] = '\0';
	return (l + n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		ij[2];
	int		len;
	char	**t;

	I = 0;
	J = 0;
	len = lenght(s, c);
	if (!(t = (char**)malloc(sizeof(char*) * len + 1)))
		return (0);
	while (I < len)
	{
		J = split(t, s, ij, c);
		I++;
	}
	t[I] = 0;
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:48:21 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/06 17:20:38 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countletter(char *s, char c, int start)
{
	int		letter;

	letter = 0;
	while (s[start] && s[start] != c)
	{
		letter++;
		start++;
	}
	return (letter);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**fraiche;
	int		mot;

	i = 0;
	j = 0;
	mot = ft_countword((char *)s, c);
	if (!(fraiche = (char **)malloc(sizeof(char *) * mot + 1)))
		return (0);
	while (i < mot)
	{
		while (s[j] == c)
			j++;
		if (s[j] != c)
		{
			fraiche[i] = ft_strsub((char *)s, j,\
			ft_countletter((char *)s, c, j));
			i++;
			j = j + ft_countletter((char *)s, c, j);
		}
	}
	fraiche[i] = NULL;
	return (fraiche);
}

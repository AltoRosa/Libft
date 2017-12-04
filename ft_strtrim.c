/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 12:00:56 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/03 19:14:12 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpy(const char *s, int a, int b, int nb)
{
	char	*fraiche;

	if (!(fraiche = (char *)malloc(sizeof(char) * nb + 1)))
		return (NULL);
	b = 0;
	while (s[a] && b < nb)
	{
		fraiche[b] = s[a];
		a++;
		b++;
	}
	fraiche[b] = '\0';
	return (fraiche);
}

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	int		nb;

	a = 0;
	if (s == NULL)
		return (NULL);
	nb = ft_strlen((char *)s);
	while ((s[a]) && ((s[a] == ' ') || (s[a] == '\n') || (s[a] == '\t')))
		a++;
	b = nb - 1;
	while (b >= 0 && ((s[b] == ' ') || (s[b] == '\n') || (s[b] == '\t')))
		b--;
	nb = b + 1 - a;
	if (nb < 0)
		nb = 0;
	return (ft_cpy(s, a, b, nb));
}

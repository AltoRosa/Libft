/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:27:45 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/11 18:47:58 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_countint(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_fillfraiche(int n, char *fraiche)
{
	int	i;
	int	drapeau;

	i = 0;
	drapeau = 1;
	if (n < 0)
	{
		n = n * (-1);
		fraiche[i] = '-';
		i++;
	}
	while ((n / drapeau) >= 10)
		drapeau = drapeau * 10;
	while (drapeau > 0)
	{
		fraiche[i] = (n / drapeau) % 10 + '0';
		drapeau = drapeau / 10;
		i++;
	}
	fraiche[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*fraiche;
	int		nb;

	i = 0;
	nb = ft_countint(n);
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(fraiche = (char *)malloc(sizeof(char) * nb + 1)))
		return (NULL);
	ft_fillfraiche(n, fraiche);
	return (fraiche);
}

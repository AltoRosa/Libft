/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:35:44 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/05 12:14:48 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	int	i;
	int nb;

	i = 0;
	nb = ft_strlen(needle);
	if (hay == 0)
		return (NULL);
	if (needle == 0)
		return ((char *)hay);
	while (hay[i])
	{
		if (ft_strncmp(hay + i, needle, nb) == 0)
			return ((char *)hay + i);
		i++;
	}
	return (NULL);
}

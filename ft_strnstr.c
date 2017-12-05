/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:14:21 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/05 12:33:46 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	int		nb;

	i = 0;
	nb = ft_strlen(needle);
	if (hay == 0 || n == 0)
		return (NULL);
	if (needle == 0)
		return ((char *)hay);
	while (i < n - nb)
	{
		if (ft_strncmp(hay + i, needle, nb) == 0)
			return ((char *)hay + i);
		i++;
	}
	return (NULL);
}

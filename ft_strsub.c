/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 15:50:37 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/05 16:25:54 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	size_t			i;
	char			*fraiche;
	unsigned int	nb;

	i = 0;
	nb = ft_strlen((char *)s);
	if (start > nb)
		return (NULL);
	if (!(fraiche = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (s[i] && i < n)
	{
		fraiche[i] = s[start];
		start++;
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}

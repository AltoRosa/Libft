/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:34:14 by rmiralle          #+#    #+#             */
/*   Updated: 2017/11/24 23:01:54 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		i;
	int		j;
	size_t	o;

	i = 0;
	j = 0;
	o = 0;
	while (dst[i] && src[j])
	{
		while (dst[i])
			i++;
		while (src[j] && o < n)
		{
			dst[i + j] = src[j];
			j++;
			o++;			
		}
	}
	dst[i + j] = '\0';
	return (dst);
}

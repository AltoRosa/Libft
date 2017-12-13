/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:40:26 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/13 18:49:29 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)src)[i] != c)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dst)[i] = ((char *)src)[i];
	if (((char *)src)[i] != c)
		return (NULL);
	return (&dst[i] + 1);
}

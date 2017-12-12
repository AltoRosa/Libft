/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:57:42 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/12 16:37:48 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	taille_dst;
	int taille_src;
	int	j;
	int	n;

	taille_dst = ft_strlen(dst);
	taille_src = ft_strlen(src);
	j = 0;
	n = size - taille_dst - 1;
	if (n < 0)
		return (taille_src + size);
	while (src[j] && j < n)
	{
		dst[taille_dst + j] = src[j];
		j++;
	}
	dst[taille_dst + j] = '\0';
	return (taille_dst + taille_src);
}

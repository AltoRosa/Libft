/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:11:24 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/04 20:27:18 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = ft_memdup((char *)src, n);
	while (i < n)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:11:24 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/14 17:02:44 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	tmp[n];

	i = 0;
	ft_memcpy(tmp, src, n);
	while (i < n)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}

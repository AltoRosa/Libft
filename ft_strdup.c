/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:23:00 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/15 18:35:14 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dst;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	ft_bzero(dst, (sizeof(char) * (ft_strlen(str) + 1)));
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

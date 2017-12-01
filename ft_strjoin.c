/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:53:50 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/01 13:39:01 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((!s1 || !s2) || !(fraiche = (char *)malloc(sizeof(char)
	* (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
		return (NULL);
	while (s1[i])
	{
		fraiche[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		fraiche[i + j] = s2[j];
		j++;
	}
	fraiche[i + j] = '\0';
	return (fraiche);
}

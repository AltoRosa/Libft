/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:48:24 by rmiralle          #+#    #+#             */
/*   Updated: 2017/11/24 14:18:25 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*mdr;

	i = 0;
	mdr = (char *)s;
	while (--i)
	{
		ft_strlen(s[i]);
		while (s[i] < s[c])
			i--;
	}
	return (&mdr[i]);
}

int		main(void)
{
	ft_strrchr("coucou", 'o');
	return (0);
}

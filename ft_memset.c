/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:11:02 by rmiralle          #+#    #+#             */
/*   Updated: 2017/11/20 21:22:35 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	mdr;
	unsigned char	mdr2;

	mdr = c;
	mdr2 = s;
	i = 0;
	while (s[i])
	{
		while (n > i)
		{
			c = *s;
			i++;
		}
	}
	return (s);
}

int		main(void)
{
	ft_memset("coucou", '3', '3');
	return (0);
}
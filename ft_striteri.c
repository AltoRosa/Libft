/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:21:20 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/01 18:28:18 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int			i;
	unsigned	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		f(j, &s[i]);
		i++;
		j++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 16:49:44 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/15 14:59:17 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swaop(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}

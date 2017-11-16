/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:19:08 by rmiralle          #+#    #+#             */
/*   Updated: 2017/11/16 19:13:22 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	printf("%d\n", atoi("123"));
	printf("%d\n", atoi("-123"));
	printf("%d\n", atoi("-+123"));
	printf("%d\n", atoi("+ -123"));
	printf("%d\n", atoi("a123"));
	printf("%d\n", atoi("1a23"));
	printf("%d\n", atoi("123a"));
	printf("%d\n", atoi("-a123"));
	printf("%d\n", atoi("1-2a3"));
	printf("%d\n", atoi("123a"));
	printf("%d\n", atoi("a-123"));
	printf("%d\n", atoi("1 ff23"));
	printf("%d\n", atoi("12.3"));
	printf("%d\n", atoi("< 2/123"));
	printf("%d\n", atoi("1a+-23"));
	printf("%d\n", atoi("1ef- +23"));
	printf("%d\n", atoi("12 3"));	
	return (0);
}

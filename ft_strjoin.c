/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:53:50 by rmiralle          #+#    #+#             */
/*   Updated: 2017/11/24 23:02:57 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fraiche;

	if ((!s1 || !s2) || !(fraiche = (char *)malloc(sizeof(char *)
	* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	return (ft_strcat(ft_strcpy(fraiche, s1), s2));
}

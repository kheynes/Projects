/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:27:40 by kheynes           #+#    #+#             */
/*   Updated: 2019/05/22 09:30:33 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*str;

	l = 0;
	while (src[l])
		l++;
	str = (char*)malloc(sizeof(*str) * (l + 1));
	i = 0;
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

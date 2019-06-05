/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:19:26 by kheynes           #+#    #+#             */
/*   Updated: 2019/06/05 15:45:05 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char a;
	unsigned char b;

	while (n-- > 0)
	{
		a = (unsigned char)*s1++;
		b = (unsigned char)*s2++;
		if (a != b)
			return (a - b);
		if (a == '\0')
			return (0);
	}
	return (0);
}

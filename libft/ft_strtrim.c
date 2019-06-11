/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:15:18 by kheynes           #+#    #+#             */
/*   Updated: 2019/06/11 16:33:26 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;

	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	while (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\n')
		n--;
	i = -1;
	while (s[i++] == ' ' || s[i] == '\t' || s[i] == '\n')
		n--;
	if (n <= 0)
		n = 0;
	str = (char*)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (i++ < n)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}

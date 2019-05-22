/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:55:19 by kheynes           #+#    #+#             */
/*   Updated: 2019/05/22 11:14:44 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (0);
	else
		return (0);
}

int main()
{
	int i;
	
	i = 'a';
	if (ft_isalnum(i))
		printf("i is alpha numeric");
	else
		printf("i is not alpha numeric");
	return (0);
}

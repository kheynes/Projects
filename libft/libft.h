/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:35:20 by kheynes           #+#    #+#             */
/*   Updated: 2019/05/23 10:49:19 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
#define __LIBFT_H__

void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcpy(char *dst, const char *src);
int	ft_strlen(const char *str);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int	ft_isalpha (int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:18:51 by kheynes           #+#    #+#             */
/*   Updated: 2019/05/28 14:13:47 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strlen(const char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		ft_isalpha (int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strncpy(char *dst, char *src, size_t n);
#endif

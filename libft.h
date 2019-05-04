/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:34:08 by tebatsai          #+#    #+#             */
/*   Updated: 2019/05/03 23:08:57 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define I ij[0]
# define J ij[1]
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *s);
char	*ft_itoa(int n);
void	ft_bzero(char *s, int n);
int		ft_isitspace(char s);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*strrchr(const char *str, int c);
char	*ft_strstr(const char *s1, const char *s2);
int		ft_toupper(int c);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
int		ft_toupper(int c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_striter(char *s, void (*f)(char *));
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strmap(char const *s, char (*f)(char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putstr(const char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
#endif

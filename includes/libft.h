/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:13:09 by atgerard          #+#    #+#             */
/*   Updated: 2017/03/31 11:06:08 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 13
# define READ_LINE 1
# define READ_ERROR -1
# define READ_OVER 0
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint (int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s);
char	**ft_strsplit(char const *s, char c);
int		ft_countav(const char *str, char c);
char	*ft_itoa(int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
int		get_next_line(int const fd, char **line);
int		bshn_stock(char **stock, char **line);
int		bshn_buffer(char *buffer, char **stock, char **line);
void	ft_escape_norm(char *buffer, char **stock);
int		ft_read(char *buffer, char **stock, char **line);

#endif

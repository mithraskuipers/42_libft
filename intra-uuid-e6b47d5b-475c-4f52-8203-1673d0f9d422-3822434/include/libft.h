/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 12:16:23 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/09 10:29:12 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Includes

#include <stdio.h>	// printf
#include <stdlib.h>	// malloc
#include <unistd.h>	// read/write
#include <stddef.h>	// size_t
#include <fcntl.h>	// open
#include <string.h>	// ???

// Prototypes

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t 	ft_strlen(const char *s);
void 	*ft_memset(void *b, int c, size_t len);
void 	ft_bzero(void *s, size_t n);
void 	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

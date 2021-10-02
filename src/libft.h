/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/24 20:05:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/28 15:31:33 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		// printf
#include <stdlib.h>		// malloc
#include <unistd.h>		// read/write
#include <stddef.h>		// for size_t
#include <fcntl.h>		// open
#include <string.h>		// for memset?

// Part 1

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size); //difficult
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *small, size_t len);

// Part ???

char *ft_strdup(const char *s);
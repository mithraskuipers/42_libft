/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 16:03:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/06 19:25:12 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;
	tmp = malloc(len);
	ft_memcpy(tmp, src, len);
	ft_bzero(dst, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

/*
#include "../include/libft.h"
#include <stdio.h>
#include <string.h>

size_t 	ft_strlen(const char *s)
{
	size_t 	i;
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void 	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_uchar;
	size_t 			i;
	s_uchar = (unsigned char *)s;
	i = 0;
	if (n == 0)
	{
		return;
	}
	while (i <  n)
	{
		s_uchar[i] = '\0';
		i++;
	}
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dst_uchar;
	unsigned char	*src_uchar;
	size_t			i;

	dst_uchar = (unsigned char *)dst;
	src_uchar = (unsigned char *)src;
	i = 0;

	while (i < n)
	{
		dst_uchar[i] = src_uchar[i];
		i++;
	}
	return(dst);
}

int main()
{
    char str1[] = "Roltrappenland";
    char str2[] = "Quiz";
	char str3[] = "Roltrappenland";
    char str4[] = "Quiz";
 
    puts("str1 before memmove ");
    puts(str1);
    ft_memmove(str1, str2, 5);
    puts("\nstr1 after memmove ");
    puts(str1);


	puts("str3 before memmove ");
    puts(str3);
    memmove(str3, str4, 5);
    puts("\nstr3 after memmove ");
    puts(str3);
 
    return 0;
}
*/
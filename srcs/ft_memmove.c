/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 16:03:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/16 12:41:47 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmp;

	if (dst == NULL || src == NULL)
		return (dst);
	tmp = (char *)malloc(sizeof(char) * len);
	if (!tmp)
	{
		return (NULL);
	}
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

/*
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_memcpy.c"


int main()
{
    char str11[] = "Quilfort";
	char str12[] = "Quilfort";
    char str21[] = "Bart";
    char str22[] = "Bart";

	memmove(str11, str21, 4);
	ft_memmove(str12, str22, 4);

    printf("\nstr11 after memmove [%s]", str11);
	printf("\nstr11 after ft_memmove [%s]", str12);

    return 0;
}
*/

/*
void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*s3;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (s1);
	if (!(s3 = malloc(sizeof(size_t) * n)))
		return (NULL);
	while (i < n)
	{
		*((char *)s3 + i) = *((char *)s2 + i);
		i++;
	}
	ft_memcpy(s1, s3, n);
	free(s3);
	return (s1);
}
*/

/*
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
*/

/*
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
*/

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

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
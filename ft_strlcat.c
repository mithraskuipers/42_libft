/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 21:18:39 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/27 15:53:24 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	src_i;
	size_t	dst_i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
	{
		return (src_len + size);
	}
	src_i = 0;
	dst_i = dst_len;
	while (src[src_i] && ((dst_i < size - 1) > 0))
	{
		dst[dst_i] = src[src_i];
		dst_i++;
		src_i++;
	}
	dst[dst_i] = '\0';
	return (dst_len + src_len);
}

/*
** #include "ft_strlen.c"
** int main(void)
** {
** 	char	dst[] = "Hello";
** 	char	src[] = "Goodbye";
** 	ft_strlcat(dst, src, 10); // Should print "HelloGood"
** 	puts(dst);
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strlcat.c
**
** DESCRIPTION:
** strlcat(3) appends the NULL-terminated string 'src' to the end of 'dst'.
** It appends at most (size - strlen(dst) - 1) bytes.
** dst will be NULL-terminated by strlcat(3) if it modifies dst.
**
** PROTOTYPE AND ARGUMENTS:
** size_t	ft_strlcat(char *dst, const char *src, size_t size)
**
** dst:		String to which src is appended to.
** src:		String to append to dst.
** size:	size of the memory region containing (the new) dst.
**
** RETURN VALUE:
** Length of the concatenated string whether er not it was possible to copy it
** at all. This makes it easier to calculate the required buffer size.
*/

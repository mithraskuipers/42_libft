/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 07:52:37 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/07 16:44:01 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;

	if (!(dstsize) || (!(dst) || (!(src))))
	{
		return (dst_len);
	}
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len); // limited dst + src
	}
	while (i < ((dstsize - dst_len) - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len); // entire dst + src
}

// https://documentation.help/Cpp/strlcpy.htm

/*
src : The string to append to dst
dst : the string which receives src
size : The size of the dst buffer.
*/

/*
Why strlcat(3) ?
This means that you can call strlcat() once 
to find out how much space is required, then allocate it if you do not have enough, and finally 
call strlcat() a second time to create the required string.

If there is not enough room in the destination buffer for the entire source string to be added, 
the string being copied is truncated. The resulting string in the destination buffer is always null-terminated.
*/
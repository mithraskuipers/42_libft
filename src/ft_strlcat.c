/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 11:08:05 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 17:58:30 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char *s, size_t size)
{
	size_t	i;
	
	i = 0;
	while(s[i] && (i < size))
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_newsize;
	size_t	index;

	index = 0;
	dst_newsize = 0;
	dst_newsize = ft_strnlen(dst, size);

	while ((src[index] != '\0') && ((dst_newsize + index + 1) < size))
	{
		dst[dst_newsize + index] = src[index];
		index++;
	}
	if (dst_newsize < size)
	{
		dst[dst_newsize + index] = '\0';
	}
	return (dst_newsize + ft_strlen(src));
}

/*
** Explanation:
** The 'size' parameter determines the new size of 'dst'. Because you have to
** make sure that 'src' still fits inside 'dst', you need to first find out how
** much room is available in 'dst' (after specifying its new size using 'size').
** This is done using ft_strnlen(2).
*/
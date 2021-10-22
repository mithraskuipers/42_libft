/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 14:38:25 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:33 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
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

// The memcpy() function copies n bytes from memory area src to memory area dst.
// If dst and src overlap, behavior is undefined.  Applications in which dst and 
// src might overlap should use memmove(3) instead.
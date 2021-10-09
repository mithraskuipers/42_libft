/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 14:53:34 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/09 15:10:45 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	*s_uchar;
	unsigned char	c_uchar;
	size_t			i;

	s_uchar = (unsigned char *)s;
	c_uchar = (unsigned char)c;
	i = 0;
	while (s_uchar[i] && (i < n))
	{
		if (s_uchar[i] == c_uchar)
			return (&(s_uchar[i]));
		i++;
	}
	if ((s_uchar[i] == c_uchar) && (i < n))
	{
		return (&(s_uchar[i]));
	}
	return (0);
}

/*
DESCRIPTION
The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

RETURN VALUES
The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/
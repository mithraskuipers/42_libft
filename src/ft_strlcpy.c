/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 10:09:05 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 10:31:54 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;

	if (size > 0)
	{
		while ((src[i]) && (i < (size - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
The strlcpy() returns the total length of the string they
tried to create.  For strlcpy() that means the length of src.  
*/
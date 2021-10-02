/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/28 12:43:29 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/28 12:52:24 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_uchar;
	unsigned char	*s2_uchar;
	size_t			i;

	s1_uchar = (unsigned char *)s1;
	s2_uchar = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_uchar[i] != s2_uchar[i])
		{
			return(s1_uchar[i] - s2_uchar[i]);
		}
		i++;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 15:11:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/09 16:25:48 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char 	*s1_uchar;	
	unsigned char 	*s2_uchar;
	size_t 			i;
	s1_uchar = (unsigned char *)s1;
	s2_uchar = (unsigned char *)s2;
	i = 0;
	if (!(s1_uchar) && (!(s2_uchar)))
	{
		return (0);
	}
	while (i < n)
	{
		if (s1_uchar[i] != s2_uchar[i])
		{
			return (s1_uchar[i] - s2_uchar[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char s1[] = "abc";
	const char s2[] = "aba";
	printf("real %d", memcmp(s1, s2, 3));
	
	printf("\n");
	printf("fake %d", ft_memcmp(s1, s2, 3));

	return (1);
}
*/

/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing
     bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.
     This behavior is not required by C and portable code should only depend on the sign of the returned value.
*/
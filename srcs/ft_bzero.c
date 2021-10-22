/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:51:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/15 18:16:00 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

//      The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

//#include <stddef.h>
//#include <stdio.h>

// void 	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }

/*
int 	main()
{
	char test[] = "Goedemorgen!";
	ft_bzero(test, 2);
	printf("%s", test);
}
*/
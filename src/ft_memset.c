/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/25 23:57:06 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 09:44:44 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_uchar;
	
	i = 0;
	s_uchar = (unsigned char *)s;
	while (i < n)
	{
		s_uchar[i] = c;
		i++;
	}
	return (s);
}

/*
Je moet de void pointer s eerst typecasten naar een unsigned char pointer.
Deze unsigned char pointer kun je vervolgens wijzigen.
*/

/*
void main()
{
	char test[] = "Goedemorgen!";
	ft_memset(test, 'a', 5);
	printf("%s", test);
}
*/
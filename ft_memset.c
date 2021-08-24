/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 12:01:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 18:37:18 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr_char;
	size_t	i;

	i = 0;
	ptr_char = (char *)s;
	while (i < n)
	{
		ptr_char[i] = c;
		i++;
	}
	return (s);
}

/*
** #include <stdio.h>
** int main (void)
** {
**   char s[] = "Hi there! What a beautiful day";
**   ft_memset (s, '+', 9);
**   puts (s);
**   return (0);
**   // This will print '+++++++++ What a beautiful day.'
** }
*/

/*
** FILE NAME:
** ft_memset.c
**
** DESCRIPTION:
** memset(3) operates as efficiently as possible on memory areas. It does not
** check for overflow of any receiving memory area. It sets the first n bytes
** in memory location s to the value of c (converted to an unsigned char).
** It returns s.
**
** PROTOTYPE AND ARGUMENTS:
** void	*memset(void *s, int c, size_t n)
**
** s:	The buffer to be set.
** c:	The value to be set.
** n:	The number of bytes to be set.
**
** RETURN VALUE:
** Pointer to (the inputted) memory location s.
*/

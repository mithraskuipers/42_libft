/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/23 21:18:19 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 18:37:37 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t num)
{
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = str;
	while (i < num)
	{
		dst[i] = '\0';
		i++;
	}
}

/*
** #include <stdio.h>
**
** int main (void)
** {
** 	// Built-in bzero()
** 	char s1[] = "Test";
** 	char s2[] = "Test";
** 	bzero(s1, 0);
** 	bzero(s2, 1);
** 	puts("Built-in bzero");
** 	printf("num = 0: %s\n", s1); // Prints "Test"
** 	printf("num = 1: %s\n", s2); // Prints nothing due to immediate null
**
** 	// Self-made bzero()
** 	char s3[] = "Test";
** 	char s4[] = "Test";
** 	bzero(s3, 0);
** 	bzero(s4, 1);
** 	puts("Self-made bzero");
** 	printf("num = 0: %s\n", s3); // Should print "Test"
** 	printf("num = 1: %s\n", s4); // Should print nothing due to immediate null
** 	return (0);
** 	// To demonstrate the workings of ft_bzero(), you can also replace
** 	// the '\0' in the code with another character.
** }
*/

/*
** Pointer arithmetic alternative
** while (i < num)
** {
** 	*dst = 0;
** 	dst++;
** }
*/

/*
** FILE NAME:
** ft_bzero.c
**
** DESCRIPTION:
** bzero(2) erases the data in the n bytes of memory, starting at the location
** pointed to by s. The erasure is done by writing zeros
** (bytes containing '\0') to that area. If n is zero, bzero() does nothing.
**
** PROTOTYPE AND ARGUMENTS:
** void	bzero(void *s, size_t n)
**
** s:	Points to a buffer to which the zeros will be copied
** n:	Number of zeros to be copied into the buffer.
**
** RETURN VALUE:
** N/A
*/

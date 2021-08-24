/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 16:19:43 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 19:45:30 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	char_c;
	size_t			i;

	i = 0;
	char_c = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == char_c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/*
** #include <stdio.h>
** int main (void)
**  {
** 	char s1[] = "Hello";
** 	puts("The memory addresses below should be identical.");
** 	printf("memchr(3): \t\t%p\n", memchr(s1, 'e', 5));
** 	printf("ft_memchr(3): \t%p", ft_memchr(s1, 'e', 5));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_memchr.c
**
** DESCRIPTION
** memchr(3) searches for the first occurrence of the character 'c'
** (unsigned char) in the first 'n' bytes of the string pointed to
** argument 'str'.
**
** PROTOTYPE AND ARGUMENTS:
** void	*memchr(const void *s, int c, size_t n)
**
** s:	Pointer to block of memory where the search is performed.
** c:	Value to be passed as an int (note: function performs byte per byte
** 			search using the unsigned char conversion of this value)
** n:	Number of bytes to be analyzed.
**
** RETURN VALUE:
** On success, memchr(3) returns a pointer to the first occurrence of c in s.
** Otherwise, it returns NULL.
**
** EXPLANATION:
** N/A
**
** EXTRA:
** return (ptr + i) also works
*/

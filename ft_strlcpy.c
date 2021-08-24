/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 20:01:43 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 20:44:12 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
** #include <stdio.h>
** int main (void)
** {
** 	char dst[] = "Hello";
** 	char src[] = "Goodbye"; // Length is 7
** 	printf("src length according to ft_strlcpy: %ld", ft_strlcpy(dst, src, 5));
** 	// With size set to 5, it should copy only the first 4 characters.
** 	// As such, printing dst should print "Good".
** 	puts("\n");
** 	puts(dst);
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strlcpy.c
**
** DESCRIPTION:
** strlcpy(3) is not a standard C function.
**
** strlcpy(3) is used to concatenate strings. It copies up to size - 1
** characters from the NULL-terminated string from src to dst
** (up to size characters).
**
** It replaces all uses for strcpy(2) and strncpy(3) by always NULL-terminating.
** strcpy(2) and strncpy(3) do not add a NULL-terminator if the string was too
** long.
**
** PROTOTYPE AND ARGUMENTS:
** size_t	ft_strlcpy(char *dst, const char *src, size_t size)
**
** dst:		String to which src will be added.
** src:		String to concatenate to another string.
** size:	Maximum number of characters to copy from src to dst/
**
** RETURN VALUE:
** The length of src, regardless of how much was copied.
**
** EXPLANATION:
** IF size is greater than 0, then WHILE src holds values AND
** our iterator i is smaller than size - 1, copy the contents
** from src to dst, using the iterator variable for array
** indexing. When the copying process is done, simply count
** the length of src and return it.
*/

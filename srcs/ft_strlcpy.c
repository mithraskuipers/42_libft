/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 19:27:01 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:10 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t 	i;
	i = 0;
	if (!(dst) || (!(src)) || (dstsize == 0))
	{
		return (ft_strlen(src));
	}
	while ((src[i]) && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include "ft_strlen.c"

int main()
{
    char str1[] = "Roltrappenland";
    char str2[] = "Quiz";
	char str3[] = "Roltrappenland";
    char str4[] = "Quiz";
 
    puts("str1 before strlcpy ");
    puts(str1);
    strlcpy(str1, str2, 3);
    puts("\nstr1 after strlcpy ");
    puts(str1);

	puts("str3 before ft_strlcpy ");
    puts(str3);
    ft_strlcpy(str3, str4, 3);
    puts("\nstr3 after ft_strlcpy ");
    puts(str3);
 
    return 0;
}
*/



/*
The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output
result as snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for
the easily misused functions strncpy(3) and strncat(3).

strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is
room.  Note that room for the NUL should be included in dstsize.

strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize
is not 0.
*/

// The strlcpy() function returns the total length of the string that would have been copied if there was unlimited space.
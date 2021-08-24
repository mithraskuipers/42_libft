/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 15:29:42 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 18:39:18 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (!tmp)
	{
		return (NULL);
	}
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

/*
** #include <stdio.h>
** #include "ft_memcpy.c"
**
** int main (void)
**  {
** 	char s1[] = "Hello";	// dest
** 	char s2[] = "Bye";		// src
** 	ft_memmove (s1, s2, 2);	// Returns 'Byllo'
** 	puts (s1);
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_memmove.c
**
** DESCRIPTION:
** memmove(3) is used for copying characters. memmove(3) is a safer alternative
** to memcpy(3) whenever src and dest overlap.
**
** PROTOTYPE AND ARGUMENTS:
** void	*memmove(void *dest, const void *src, size_t n)
**
** dest:	Pointer to the memory location to copy to.
** src:		Pointer to the memory location to copy from.
** n:		Number of bytes to copy.
**
** RETURN VALUE:
** A pointer to dest.
**
** EXPLANATION:
** This implementation uses ft_memcpy().
** Usage-wise, ft_memmove(3) is similar to ft_memcpy().
**
** Firstly, memmove() allocates memory to tmporarily store whatever needs to be
** safely copied to dest. Secondly, using ft_memcpy() it fills the allocated
** memory with whatever needs to be copied to dest. Thirdly, again using
** ft_memcpy() it copies what is stored in 'tmp' to 'dest'. Finally, memory
** allocated to 'tmp' is deallocated and a pointer to the start of the 'dest'
** location is returned.
*/

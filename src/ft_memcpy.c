/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 00:50:28 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/28 11:44:52 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Werkt, warmachine passed
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_uchar;
	unsigned char	*src_uchar;

	i = 0;
	dest_uchar = (unsigned char *)dest;
	src_uchar = (unsigned char *)src;
	while (i < n)
	{
		dest_uchar[i] = src_uchar[i];
		i++;
	}
	return (dest);
}

/*
void main()
{
	char test1[] = "aaaaaaaaa";
	char test2[] = "zzzzzzzzz";
	ft_memcpy(test2, test1, 5);	

	printf("%s", test2);
}
*/


/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap. 
Use memmove(3) if the memory areas do overlap.

RETURN VALUE
The memcpy() function returns a pointer to dest.
*/
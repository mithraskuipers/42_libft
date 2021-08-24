/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 19:34:35 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 19:50:32 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*
** #include <stdio.h>
** int main (void)
** {
** 	char s1[] = "Hello";
** 	char s2[] = "Hey";
** 	puts("The function returns below should be identical.");
** 	printf("memcmp(3): %d\n", memcmp(s1, s2, 3));
** 	printf("ft_memcmp(3): %d", ft_memcmp(s1, s2, 3));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_memcmp.c
**
** DESCRIPTION:
** memcmp(3) compares two blocks of memory.
**
** memcmp(3) compares n bytes of two regions of memory, treating each
** byte as an unsigned character. It returns an integer less than, equal to, or
** greater than zero according to whether s1 is lexicographically less than,
** equal to, or greater than s2.
**
** memcmp() does a byte by byte comparison. As 1 char is equal to 1 byte, we
** typecast the inputted memory locations to type unsigned char.
**
** Keep comparing until there is a dissociation.
**
** PROTOTYPE AND ARGUMENTS:
** int		memcmp(const void *s1, const void *s2, size_t n)
**
** s1:		Points to the first buffer to compare.
** s2:		Points to the second buffer to compare.
** n:		Number of bytes to compare.
**
** RETURN VALUE:
** The memcmp() function returns an integer less than, equal to, or
** greater than zero if the first n bytes of s1 is found, respectively,
** to be less than, to match, or be greater than the first n bytes of
** s2.
**
** For a nonzero return value, the sign is determined by the sign of the
** difference between the first pair of bytes (interpreted as unsigned
** char) that differ in s1 and s2.
**
** If n is zero, the return value is zero.
*/

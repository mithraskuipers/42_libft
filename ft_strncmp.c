/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 11:03:38 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/02/27 20:40:46 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && (s1[i] == s2[i]) && (i < (n - 1)))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
** #include <stdio.h>
** int main (void)
**  {
** 	char s1[] = "Goodbye";
** 	char s2[] = "bye";
** 	puts("The values below should be identical.");
** 	printf("strncmp(): \t\t%d\n", strncmp (s1, s2, 100));
** 	printf("ft_strncmp(): \t%d", ft_strncmp (s1, s2, 100));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strncmp.c
**
** DESCRIPTION:
** The strcmp(3) function compares strings s1 and s2, but only (at most)
** the first n bytes of them.
**
** The comparison is done using unsigned characters.
**
** PROTOTYPE AND ARGUMENTS:
** int		strncmp(const char *s1, const char *s2, size_t n)
**
** s1:	String 1
** s2:	String 2
** n:	Maximum number of characters to compare.
**
** RETURN VALUE:
** Smaller than 0 if s1 is less than s2.
** Greater than 0 if s2 is less than s1.
** Equal to 0 if s1 is equal to s2.
*/

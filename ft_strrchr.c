/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 22:32:53 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/27 22:44:46 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (c == 0)
	{
		return ((char *)str + i);
	}
	while (i > 0)
	{
		i--;
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
	}
	return (NULL);
}

/*
** #include <stdio.h>
** int main (void)
** {
** 	char str[] = "Hello";
** 	puts("The memory addresses below should be identical.");
** 	printf("strrchr(2): \t%p\n", strrchr(str, 'l'));
** 	printf("ft_strrchr(2): \t%p", ft_strrchr(str, 'l'));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strrchr.c
**
** DESCRIPTION:
** strrchr(2) is used for locating a character in a string. It returns a pointer
** to the last occurrence of the character c in the string s.
**
** PROTOTYPE AND ARGUMENTS:
** char		*ft_strrchr(const char *s, int c)
**
** s:		Pointer to the string (character array) in which you want to search.
** c:		Character to search for.
**
** RETURN VALUE:
** A pointer to the last occurrence of the character in the string.
** It returns NULL if the character is not found.
*/

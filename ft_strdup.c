/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:11:22 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/29 13:39:39 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if (!(dup = (char *)malloc(sizeof(char) * (i + 1))))
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
** int main(void)
** {
** 	char s[] = "Hello";
** 	printf("Original string: \t%s\n", s);
** 	printf("Duplicated string: \t%s", ft_strdup(s));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strdup.c
**
** DESCRIPTION:
** ft_strdup(1) is used to make a duplicate of string s. Memory allocation
** for the new string is done with malloc(1). It returns NULL if insufficient
** memory was available.
**
** PROTOTYPE AND ARGUMENTS:
** char	*ft_strdup(char *s)
**
** s:	Pointer to an allocated area of memory containing the NULL-terminated
**		string which you want to duplicate.
**
** RETURN VALUE:
** Pointer to a new string, which is a duplicate of s.
**
** EXPLANATION:
** First the function determines the length of s. Then the length is used
** to determine how much memory needs to be allocated, assuming that each
** character is of char type. We add 1 to the determined string length,
** such that we allocate enough memory for the null terminator. After memory
** allocation, the function copies over the contents of s into the allocated
** memory, one character at a time. Ultimately, the null terminator is added.
*/

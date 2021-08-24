/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 10:59:23 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 11:02:49 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	s1_i;
	unsigned int	s2_i;

	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	s1_i = 0;
	while (s1[s1_i] && s1_i < n)
	{
		s2_i = 0;
		if (s1[s1_i] == s2[s2_i])
		{
			while (s1_i + s2_i < n && s1[s1_i + s2_i] == s2[s2_i])
			{
				s2_i++;
				if (!s2[s2_i])
				{
					return ((char *)&s1[s1_i]);
				}
			}
		}
		s1_i++;
	}
	return (0);
}

/*
** #include <stdio.h>
** int main (void)
**  {
** 	char s1[] = "Goodbye";
** 	char s2[] = "bye";
** 	printf("%p", ft_strnstr (s1, s2, 100));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strnstr.c
**
** DESCRIPTION:
** strnstr(3) is not a default C function.
** The strnstr(3) function locates the first occurrence of the null-terminated
** string s2 in the string s1, where not more than n characters are
** searched. Characters that appear after a '\0' character are not searched.
**
** PROTOTYPE AND ARGUMENTS:
** char		*strnstr(const char *s1, const char *s2, size_t n)
**
** s1:		String to be searched in.
** s2:		String to be searched for.
** n:		Maximum number of characters to search.
**
** RETURN VALUE:
** Returns a pointer to the beginning of the first occurrence of s2 in s1.
** If s2 does not appear in s1, it returns NULL.
** If s2 points to a string with zero length, it returns s1.
**
** EXPLANATION:
** First check whether s2 is a string with zero length. If so, return s1
** (which can only be returned if it is first typecasted to char *, otherwise
** s1 would be of const char * type, which is not the return type of the
** ft_strnstr() function). Then, while s1[s1_i] holds content and s1_i is
** smaller than n, check whether s2[0] occurs in s1. If s1[s1_i] == s2[s2_i],
** ????????????????????????????????????????????????????????????????????????????
** ????????????????????????????????????????????????????????????????????????????
** ????????????????????????????????????????????????????????????????????????????
*/

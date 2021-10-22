/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 10:29:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/20 19:20:36 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

///*
#include "libft.h"
//#include "ft_strlen.c"
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	unsigned char *s1_uc;
	unsigned char *s2_uc;

	s1_uc = (unsigned char *)s1;
	s2_uc = (unsigned char *)s2;

	while (i < n)
	{
		if ((!s1_uc[i]) && (s1_uc[i] == s2_uc[i]))
		{
			return (0);
		}
		if (s1_uc[i] != s2_uc[i])
		{
			return (s1_uc[i] - s2_uc[i]);
		}

		i++;
	}
	return (0);
}




// vergelijk totdat s1 tot een eind is gekomen. doesnt give a shit about s2
//*/


/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater than `\0'.
*/
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char s1[] = "abc"; //mithras 115
	const char s2[] = "aba"; //mithrat 116
	printf("real %d", strncmp(s1, s2, 3)); //-1 (want 115 - 116 = -1)
	
	printf("\n");
	printf("fake %d", ft_strncmp(s1, s2, 3));

	return (1);

}
*/
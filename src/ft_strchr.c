/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 16:52:06 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/07 17:19:45 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s_uchar;
	
	i = 0;
	s_uchar = (char *)s;
	while (s_uchar[i])
	{
		if (s_uchar[i] == (char)c)
		{
			return (&s_uchar[i]);
		}
		i++;
	}
	if (s_uchar[i] == (char)c) // in case the character is a null terminator.
	{
		return (&s_uchar[i]);
	}
	return (NULL);
}

//The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.
//The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 17:21:40 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:24 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t 	len;
	char	*s_uchar;
	
	len = ft_strlen((char *)s);
	s_uchar = (char *)s;
	while (len != '\0' && s_uchar[len] != (char)c)
	{
		len--;
	}
	if (s_uchar[len] == (char)c) // in case the character is a null terminator.
	{
		return (&s_uchar[len]);
	}
	return (NULL);
}

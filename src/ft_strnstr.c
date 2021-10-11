/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 17:11:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/11 14:37:52 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}	
	while (haystack[j] && j < len) // (haystack[j] ontbrak eerst en gaf errors
	{
		while (haystack[j] == needle[i] && j < len)
		{
			if (haystack[j] == needle[i] && needle[i + 1] == '\0')
				return ((char *)&haystack[j - i]);
			i++;
			j++;
		}
		i = 0;
		j++;
	}
	return (0);
}
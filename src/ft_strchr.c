/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 17:31:51 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 17:58:03 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
	{
		return ((char *)(&(s[ft_strlen(s)])));
	}

	while (s[i])
	{
		if (s[i] == c)
		{
			return((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
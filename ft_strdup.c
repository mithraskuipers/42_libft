/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 19:42:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/27 19:28:26 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	size_t	i;
	char	*dup;

	s1_len = ft_strlen(s1);
	i = 0;
	dup = malloc((s1_len + 1) * sizeof(char));
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
ft_strdup(1) uses ft_strlen(1) to sufficient memory such that it can store the
inputted char array 's1' in a new array 'dup'. Then, it iterates over each char
in 's1' and stores that char in 'dup'. Finally, it adds a null terminator to 
'dup'.
*/
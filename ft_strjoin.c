/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/10 10:01:53 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/28 12:30:54 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	char	*s_join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	s_join = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!(s_join))
		return (NULL);
	while (i < s1_len)
	{
		s_join[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		s_join[j + i] = s2[j];
		j++;
	}
	s_join[j + i] = '\0';
	return (s_join);
}

/*
ft_strjoin(2) allocates enough memory to store the contents of both user 
inputted char arrays 's1' and 's2' in 's_join', while also taking into 
considering the needed null terminator. Then, I iterate over 's1' using 
iterator var 'i', and while I have not reached the end of 's1', I copy its 
contents to 's_join'. Next, I perform a similar process for copying 's2' but
using a separate iterator var 'j'.
*/
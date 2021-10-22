/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 19:57:23 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/21 21:22:10 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_s;

	i = 0;
	s_len = ft_strlen(s);

	if (!(s))
	{
		return (NULL);
	}
	if (start > s_len) // geleerd van Tessa. Was mij niet opgevallen.
	{
		return (ft_strdup(""));
	}

	sub_s = ft_calloc((len + 1), sizeof(char));
	if (!(sub_s))
	{
		return (NULL);
	}
	while ((s[i]) && (i < len))
	{
		sub_s[i] = s[i + start];
		i++;
	}
	return (sub_s);
}

//Rowan ("Rowan", 3, 2);

/*
int main()
{
	char s1[] = "bier is beter dan kaas";
	char s2[] = "Rowan";
	char *str = ft_substr(s1, 23, 1);
	printf("%s", str);
	// printf("%s", substr(s2, 3, 2));
	while(1);
	return (1);
}
*/


/*
Parameters
#1.	The string from which to create the substring.
#2.	The start index of the substring in the string 's'.
#3.	The maximum length of the substring.

Return value
The substring. NULL if the allocation fails.

External functs.
malloc

Description
Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.
*/

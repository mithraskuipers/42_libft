/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 19:57:23 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/12 17:04:17 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	//size_t	starti;
	size_t	s_len;
	char	*sub_s;

	i = 0;
	//starti = (int)start;
	s_len = ft_strlen(s);

	if (!(s))
	{
		return (NULL);
	}
	///*
	if (!(sub_s = (char *)malloc((s_len + 1) * sizeof(char))))
	{
		return (NULL);
	}
	//*/
	//sub_s = ft_calloc(s_len, sizeof(char));

	if (start > s_len) // geleerd van Tessa. Was mij niet opgevallen.
	{
		return (ft_strdup(""));
	}
	while ((s[i]) && (i < len))
	{
		sub_s[i] = s[i + start];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

/*
#include "ft_strlen.c"
int main()
{
	char s1[] = "Mithras Kuipers";
	printf("%s", ft_substr(s1, 8, 7));
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
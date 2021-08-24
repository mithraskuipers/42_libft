/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/29 14:27:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/29 15:09:24 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*
** int main(void)
** {
** 	char s[] = "Hello";
** 	printf("Original string: \t%s\n", s);
** 	printf("Substring: \t\t\t%s", ft_substr(s, 0, 4)); // Should print Hell
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_substr.c
**
** DESCRIPTION:
** ft_substr(1) is used to return a substring of string s. The substring
** begins at index 'start' and is of maximum size 'len'. Note: when deciding the
** size, consider also a position for the NULL terminator. Memory allocation for
** the substring is done using malloc(1). It returns NULL if insufficient memory
** was available.
**
** PROTOTYPE AND ARGUMENTS:
** char	*ft_substr(char const *s, unsigned int start, size_t len)
**
** s:		Pointer to the NULL-terminated string from which you want to extract
**			the substring.
** start:	Start index of the substring in s.
** len:		Maximum length of the substring.
**
** RETURN VALUE:
** Pointer to a new string, which is the substring of s.
**
** EXPLANATION:
** First the function allocates enough memory for the desired substring,
** named 'str'. Then, WHILE there is content in the original string 's',
** IF our index iterator 'i' is equal to or greater than 'start' AND our
** other index iterator 'j' is smaller than the maximum length 'len',
** then copy over the content over from s[i] into str[j] and increment 'j'.
** At the end of the WHILE loop 'i' is incremented. At the end of the function
** 'str' is NULL-terminated.
*/

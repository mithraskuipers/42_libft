/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 13:20:37 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/12 17:44:12 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_substr.c"

static size_t	ft_nparts(char const *s, char c)
{
	size_t	i;
	size_t	nparts;

	nparts = 0;
	
	i = 0;
	while ((s[i]) && (s[i] == c))
	{
		i++;
	}
	while (s[i])
	{
		if ((char)s[i] == c)
		{
			while (s[i] && (char)s[i + 1] == c)
			{
				i++;
			}
			nparts++;
		}
		i++;
	}
	if (s[i - 1] != c)
	{
		nparts++;
	}
	return (nparts);
}

void	freeonerror(char **str)
{
	int i = 0;

	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	nparts;
	size_t	start;
	size_t	length;
	size_t	i;


	start = 0;
	length = 0;
	i = 0;
	size_t	word;
	word = 0;

	nparts = ft_nparts(s, c);
	str = malloc(sizeof(char*) * (nparts + 1));
	if (!str)
	{
		return (NULL);
	}
	while((s[i] && s[i] == c))
	{
		i++;
	}
	start = i;	
	while (s[i])
	{
		if (s[i] == c)
		{
			str[word] = ft_substr(s, start, (i - start));
			if (!str[word])
			{
				freeonerror(str);
				return (0);
			}
			word++;
			while (s[i] && (char)s[i + 1] == c)
			{
				i++;
			}
			start = i  + 1;
		}
		i++;
	}
	if (s[i - 1] != c)
	{
		str[word] = ft_substr(s, start, (i - start));
	}

	str[nparts] = 0;
	return (str);
}




/*
Function name
ft_split

Prototype
char	**ft_split(char const *s, char c);

Turn in files
-

Parameters
#1.  The string to be split.
#2.  The delimiter character.

Return value
The array of new strings resulting from the split.
NULL if the allocation fails.

External functs.
malloc, free

Description
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must be
ended by a NULL pointer.
*/
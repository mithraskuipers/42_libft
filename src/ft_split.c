/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 13:20:37 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/11 17:31:17 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_ischar(char c1, char c2)
{
	if (c1 == v2)
	{
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	
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
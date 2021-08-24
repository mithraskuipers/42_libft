/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/29 10:05:57 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/02/28 10:23:50 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	str = ft_strdup(s);
	if (str == NULL)
	{
		return (NULL);
	}
	while (s[index] != '\0')
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	return (str);
}

/*
** char f(unsigned int i, char c)
** {
** 	i = i + 1;
** 	return (c + 1);
** }
**
** #include "ft_strdup.c"
**
** int main(void)
** {
** 	char s[] = "12345abcde";
** 	printf("%s", ft_strmapi(s, &f));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strmapi.c
**
** DESCRIPTION:
** Applies the function 'f' to each character of the string 's' to create a
** new string (with malloc(3)) resulting from successive applications of ’f’.
**
** PROTOTYPE AND ARGUMENTS:
** char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
**
** s:	String on which to iterate.
** f:	Function to apply to each character.
**
** RETURN VALUE:
** String created from the successive applications of 'f'.
** Returns NULL if the allocation fails.
**
** EXPLANATION:
** We start by checking whether s and f are empty. If so, return NULL.
** Then s will be duplicated into str using ft_strdup(). Another check
** is done to check whether string duplication was succesful. Then for
** each position in str, replace it with (*f)(index, s[index]).
*/

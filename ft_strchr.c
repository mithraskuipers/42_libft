/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 20:28:48 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/27 22:34:22 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	char	char_c;
	size_t	i;

	ptr = (char *)str;
	char_c = (char)c;
	i = 0;
	while (ptr[i] && (ptr[i] != char_c))
	{
		i++;
	}
	if (ptr[i] == char_c)
	{
		return (&ptr[i]);
	}
	else
	{
		return (NULL);
	}
}

/*
** #include <stdio.h>
** int main (void)
** {
** 	char str[] = "Hello";
** 	puts("The memory addresses below should be identical.");
** 	printf("strchr(2): \t\t%p\n", strchr(str, 'o'));
** 	printf("ft_strchr(2): \t%p", ft_strchr(str, 'o'));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_strchr.c
**
** DESCRIPTION:
** strchr(2) searches for the first occurrence of the 'c' character
** (after conversion to unsigned char) in the string pointed to by 'str'.
**
** PROTOTYPE AND ARGUMENTS:
** char		*ft_strchr(const char *str, int c)
**
** str:		String to be searched in.
** c:		Character to be searched for in str.
**
** RETURN VALUE:
** Pointer to the memory location where 'c' is found in 'str'.
** It returns NULL if the character is not found.
*/

/*
** Pointer arithmetic version
** char	*ft_strchr(const char *str, int c)
** {
** 	char	*ptr;
** 	char	char_c;
**
** 	ptr = (char *)str;
** 	char_c = (char)c;
** 	while (*ptr && (*ptr != char_c))
** 	{
** 		ptr++;
** 	}
** 	if (*ptr == char_c)
** 	{
** 		return (ptr);
** 	}
** 	else
** 	{
** 		return (NULL);
** 	}
** }
*/

/*
** Yet another array indexing version
** int ft_strchr(char *s, char c)
** {
** 	int	i;
** 
** 	if (!s)
** 	{
** 		return (0);
** 	}
** 	i = 0;
** 	while (s[i] != c)
** 	{
** 		if (s[i] == '\0')
** 		{
** 			return (0);
** 		}
** 		i++;
** 	}
** 	if (s[i] == c)
** 	{
** 		return (1);
** 	}
** 	return (0);
** }
*/

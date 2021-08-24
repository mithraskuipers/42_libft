/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/11 15:25:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/11 20:30:35 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 		*ft_strjoin(char const *s1, char const *s2)
{
	char 	*str;
	char	*s_concat;
	size_t	len;
	
	len = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		len = ft_strlen(s2) + 1;
	else if (s1 && s2)
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = malloc(sizeof(*str) * (len))))
		return (NULL);
	s_concat = str;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	if (s2)
		while (*s2)
			*str++ = *s2++;
	*str = 0;
	return (s_concat);
}

/*
** FILE NAME:
** ft_strjoin.c
**
** DESCRIPTION:
** strjoin(2) concatenates two strings and returns the outcome in a newly
** made string. Basically it creates a third string using two existing strings.
**
** PROTOTYPE AND ARGUMENTS:
** char *ft_strjoin(char const *s1, char const *s2)
**
** s1:			The prefix string (string 1, to which string 2 will be attached)
** s2:			The suffix string (string 2, which will be attached to string 1)
**
** RETURN VALUE:
** s_concat:	The new string. It will return NULL if memory allocation fails.
**
** EXPLANATION:
** First we check whether string 1 and string 2 actually exist, otherwise
** return NULL. Then we check for the scenario that string 1 does not exist,
** but string 2 does. In that case we compute the length of string 2 so that we
** know how much memory to allocate for our newly made string that will be
** returned. We add 1 to this length to also account for the \0. If the previous
** is not the case, then we check for the scenario that both string 1 and string
** 2 exist. If so, we compute the length of both string 1 and string 2 plus 1.
** Again this is done to know how much memory we need to allocate for the new
** string. Then we allocate the memory, and return NULL if it fails.
*/

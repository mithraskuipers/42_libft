/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 17:31:51 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 23:19:44 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
		while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return((char *)&s[i]);
		}
		i = i - 1;
	}
	return (NULL);
}

/*
Notities: 
Do not remove!
size_t returned aan unsigned integer. Schijnbaar is dat PER DEFINITIE groter dan
0. Als je dit gebruikt, kun je dus niet hier de expressie while (i >= 0) doen,
want die is per definitie waar. Om deze reden is mijn i een int, en geen size_t.
*/
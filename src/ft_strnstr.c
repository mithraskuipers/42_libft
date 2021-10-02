/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/28 12:53:39 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/28 17:13:10 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

char *ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (*small == '\0')
		return ((char *)big);	
	while (big[j] && j < len) // (big[j] ontbrak eerst en gaf errors
	{
		while (big[j] == small[i] && j < len)
		{
			if (big[j] == small[i] && small[i + 1] == '\0')
				return ((char *)&big[j - i]);
			i++;
			j++;
		}
		i = 0;
		j++;
	}
	return (0);
}

/*
void main()
{
	char small[] = "Lydianne 8";
	char big[] = "LyLypLydianne 8";
	ft_strnstr(big, small, 100);
}
*/
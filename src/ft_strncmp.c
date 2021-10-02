/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 23:45:50 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/27 01:46:26 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);		
	}
	while ((s1[i]) && (s1[i] == s2[i]) && (i < (n - 1)))
	{
		i++;		
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
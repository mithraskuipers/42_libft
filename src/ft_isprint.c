/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 19:36:21 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/05 19:43:53 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1); 
	}
	return (0);
}

/*
How to trigger a return value of 0 in ft_isascii? That is, how to provide it
a non printable character?
#include <stdio.h>
int		main()
{
	char	c;
	c = '7';
	printf("%d", ft_isascii(c));
	return (0);
}
*/

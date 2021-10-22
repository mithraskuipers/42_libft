/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 18:45:22 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:18 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
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
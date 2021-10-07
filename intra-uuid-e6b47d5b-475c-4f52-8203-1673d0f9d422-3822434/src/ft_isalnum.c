/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 18:03:18 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/05 19:19:13 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int		main()
{
	char	c;
	c = 'z';
	printf("%d", ft_isalnum(c));
	return (0);
}
*/
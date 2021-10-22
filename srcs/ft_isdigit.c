/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 12:23:06 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:21 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
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
	c = '6';
	printf("%d", (ft_isdigit(c)));
	return (0);
}
*/
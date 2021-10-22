/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 17:52:01 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:16 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_isalpha(int c)
{
	if (((c >= 'A' && c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
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
	printf("%d", (ft_isalpha(c)));
	return (0);
}
*/
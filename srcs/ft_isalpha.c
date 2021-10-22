/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 17:52:01 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/05 20:01:56 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
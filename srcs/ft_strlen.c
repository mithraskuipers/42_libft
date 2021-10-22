/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 19:44:25 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/21 21:23:16 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t 	ft_strlen(const char *s)
{
	size_t 	i;
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <stddef.h>
int		main()
{
	char tmp[] = "hey";
	printf("%zu", ft_strlen(tmp));
	return (0);
}
*/
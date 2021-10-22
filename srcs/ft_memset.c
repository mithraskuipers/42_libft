/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 19:52:37 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:39 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	i = 0;

	unsigned char *b_uchar;
	b_uchar = (unsigned char *)b;
	while (i < len)
	{
		b_uchar[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stddef.h>
#include <stdio.h>
int 	main()
{
	char test[] = "Goedemorgen!";
	ft_memset(test, 'a', 5);
	printf("%s", test);
}
*/
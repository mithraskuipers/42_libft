/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 19:21:51 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 19:51:31 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
** #include <stdio.h>
** int main (void)
** {
** 	char s1[] = "Hello";
** 	puts("The function returns below should be identical.");
** 	printf("strlen(1): \t\t%ld \n", strlen(s1));
** 	printf("ft_strlen(1): \t%ld", ft_strlen(s1));
** 	return (0);
** }
*/

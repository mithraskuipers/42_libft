/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 17:24:58 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/02/28 10:24:59 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
	(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	printf("ft_isalnum(): %d\n", ft_isalnum('a'));
** 	printf("ft_isalnum(): %d", ft_isalnum('^'));
** }
*/

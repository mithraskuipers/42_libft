/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 19:21:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 17:27:55 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	printf("ft_isdigit(): %d\n", ft_isdigit('a'));
** 	printf("ft_isdigit(): %d", ft_isdigit('1'));
** }
*/

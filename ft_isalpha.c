/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 17:14:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 17:22:37 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	printf("ft_isalpha(): %d\n", ft_isalpha('a'));
** 	printf("ft_isalpha(): %d", ft_isalpha('&'));
** }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 15:45:52 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:08:30 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
	{
		return (arg + 32);
	}
	else
	{
		return (arg);
	}
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	printf("ft_tolower(): A becomes %c\n", ft_tolower('A'));
** 	printf("ft_tolower(): Z becomes %c\n", ft_tolower('Z'));
** }
*/

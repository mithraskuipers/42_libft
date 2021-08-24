/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 20:19:02 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:07:39 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (arg - 32);
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
** 	printf("ft_toupper(): a becomes %c\n", ft_toupper('a'));
** 	printf("ft_toupper(): z becomes %c\n", ft_toupper('z'));
** }
*/

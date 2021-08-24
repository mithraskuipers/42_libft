/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 17:13:56 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 17:22:50 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}

/*
** #include <stdio.h>
** int main(void)
** {
** 	printf("ft_isascii(): %d", ft_isascii('a'));
** }
*/

/*
** ASCII table reaches end at decimal value 127
*/

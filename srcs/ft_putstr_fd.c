/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 23:42:29 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:49 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		return;
	}	
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
** Parameters
** #1. The string to output.
** #2. The file descriptor on which to write.
** 
** Return value
** None
** 
** External functions
** write
** 
** Description
** Outputs the string 's' to the given file descriptor.
*/
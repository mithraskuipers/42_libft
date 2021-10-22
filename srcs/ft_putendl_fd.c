/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 09:24:08 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:45 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void		ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
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
** Outputs the string 's' to the given file descriptor, followed by a newline.
*/
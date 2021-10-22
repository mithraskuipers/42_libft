/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 23:42:29 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:42 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** Parameters
** #1. The character to output.
** #2. The file descriptor on which to write.
** 
** Return value
** None
** 
** External functions
** write
** 
** Description
** Outputs the character 'c' to the given file descriptor.
*/
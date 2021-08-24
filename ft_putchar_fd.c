/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:26:27 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:26:57 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** FILE NAME:
** ft_putchar_fd.c
**
** DESCRIPTION:
** Outputs the char c to the file descriptor fd.
**
** PROTOTYPE AND ARGUMENTS:
** void	ft_putchar_fd(char c, int fd);
**
** c:	The character to output.
** fd:	The file descriptor
**
** RETURN VALUE:
** N/A
*/

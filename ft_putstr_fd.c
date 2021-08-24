/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:27:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:33:12 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
** FILE NAME:
** ft_putstr_fd.c
**
** DESCRIPTION:
** ft_putstr_fd(2) outputs the string s to the file descriptor fd
**
** PROTOTYPE AND ARGUMENTS:
** void ft_putstr_fd(char const *s, int fd)
**
** s:	String to be outputted.
** fd:	File descriptor on which to write.
**
** RETURN VALUE:
** N/A
*/

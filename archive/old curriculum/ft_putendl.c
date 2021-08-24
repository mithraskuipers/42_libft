/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:27:49 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:32:57 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
** FILE NAME:
** ft_putendl.c
**
** DESCRIPTION:
** ft_putendl_fd(2) outputs the string s to the file descriptor fd followed
** by a '\n'.
**
** PROTOTYPE AND ARGUMENTS:
** void ft_putendl(char const *s)
**
** s:	String to be outputted.
** fd:	File descriptor on which to write.
**
** RETURN VALUE:
** N/A
*/

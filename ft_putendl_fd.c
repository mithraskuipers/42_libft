/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 19:42:34 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/22 19:44:09 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
FILE NAME:	
ft_putendl_fd.c

DESCRIPTION:
Outputs the string s to the standard output followed by a '\n'.

PROTOTYPE AND ARGUMENTS:
void	ft_putendl(char const *s)

s:	String to be outputted to the standard output.

RETURN VALUE:
N/A
*/
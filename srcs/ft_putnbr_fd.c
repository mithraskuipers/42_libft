/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 10:29:43 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:50:47 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
	{
		nbr = n;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd(nbr % 10 + '0', fd);	
}

/*
** #include "ft_putchar_fd.c"
** int	main()
** {
**     ft_putnbr_fd(123, 1);
** }
*/

/*
** Parameters
** #1. The integer to output.
** #2. The file descriptor on which to write.
** 
** Return value
** None
** 
** External functions
** write
** 
** Description
** Outputs the integer 'n' to the given file descriptor.
**
** Logic
** This is a recursive function that keeps calling itself as long as the
** inputted int 'n' has at least 2 digits. It keeps calling itself until it has
** reached the the left-most digit of the int.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 10:29:43 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/28 12:28:44 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}

/*
ft_putnbr_fd(2) is a recursive function that calls itself as long as the 
user-specified int 'n' has at least 2 digits. When it is done recursively
calling itself, it has reached the right-most digit of the int and it prints
that one using ft_putchar_fd(2). Next, it jumps back to the previous call of 
ft_putnbr_fd(2), which only needed to run ft_putchar_fd(2) to reach completion.
This process keeps going until it has finished running all previous 
ft_putchar_fd(2) calls.
*/
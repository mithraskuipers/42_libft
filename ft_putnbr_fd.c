/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:28:34 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/28 19:41:54 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
	{
		nbr = n;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	nbr = nbr % 10;
	nbr = nbr + '0';
	ft_putchar_fd(nbr, fd);
}

/*
** #include "ft_putchar_fd.c"
** int main(void)
** {
** 	ft_putnbr_fd(123, 1);
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_putnbr_fd.c
**
** DESCRIPTION:
** Outputs the integer n to the file descriptor fd.
**
** PROTOTYPE AND ARGUMENTS:
** void	ft_putnbr_fd(int n, int fd)
**
** n:	Integer to print.
** fd:	File descriptor on which to write.
**
** RETURN VALUE:
** N/A
*/

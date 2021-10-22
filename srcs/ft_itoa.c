/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 15:19:59 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/21 20:43:21 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
** ft_digits
** If the number is negative, turn it positive.
** If the number is zero, turn 1 (as in 1 number).
** While the number is greater than 0, divide the number by 10,
** and increment the ndigits.
*/

int			ft_ndigits(long n)
{
	int		ndigits;

	ndigits = 0;
	if (n < 0)
	{
		ndigits++;
		n = n * -1;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		ndigits++;
	}
	return (ndigits);
}

/*
** This function works backwards by filling in the empty n_str.
** It only works with valid integers that do not start with 0.
** If the first digit of the integer is a 0, it will fill in the 
** n_str with zero and return. While the n_long is greater than 0,
** determine the right-most digit using modulo 10, and turn it into
** an ascii value by adding '0'. Then update n_long by using integer
** division (this drops the remainder) and decrement the position in
** n_str.

While n is greater than 0, everytime you are able to divide it by 10, increment
the digit counter.
*/

char	*ft_strfiller(char *n_str, int ndigits, long n_long)
{
	n_str[ndigits] = '\0';
	ndigits--;
	if (n_long < 0)
	{
		n_str[0] = '-';
		n_long = n_long * -1;
	}
	if (n_long == 0)
	{
		n_str[0] = '0';
		return (n_str);
	}
	while (n_long > 0)
	{
		n_str[ndigits] = (n_long % 10) + '0';
		n_long = n_long / 10;
		ndigits--;
	}
	return (n_str);
}

char	*ft_itoa(int n)
{
	char 	*n_str;
	int		ndigits;
	long 	n_long;
	
	n_long = (long)n;
	ndigits = ft_ndigits(n_long);
	if (!(n_str = (char*)malloc(sizeof(char) * (ndigits + 1))))
	{
		return (NULL);
	}
	n_str = ft_strfiller(n_str, ndigits, n_long);
	return (n_str);
}

/*
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%s", ft_itoa(-0));
	return (0);
}
*/
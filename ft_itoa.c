/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/31 15:08:05 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/07/31 15:08:09 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen_with_minus(int num)
{
	int		numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}

char			*ft_itoa(int n)
{
	int		nlen;
	char	*s;
	long	num;

	nlen = 0;
	num = (long)n;
	nlen = ft_intlen_with_minus(n);
	if (!(s = malloc(nlen + 1)))
		return (NULL);
	s[nlen] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		s[nlen] = num % 10 + '0';
		num = num / 10;
		nlen--;
	}
	return (s);
}


/*
** FILE NAME:
** ft_itoa.c
**
** DESCRIPTION:
** ft_itoa(1) allocates (with malloc(3)) and returns a string representing the
** integer received as an argument. Negative numbers must be handled.
**
** PROTOTYPE AND ARGUMENTS:
** char		*ft_itoa(int n)
**
** n:	Integer to convert to string.
**
** RETURN VALUE:
** String representing the integer. It returns NULL if the allocation fails.
**
** EXPLANATION:
** First the function determines if the inputted integer n is negative or
** positive. Then I need to decide how much character positions are necessary
** to store the string representation of n. This can be done by simply finding
** out the number of digits of n using the helper function n_digits() and
** storing the outcome in 'i'. Next, using ft_strnew() a new string 'int2str'
** is created with enough space to store n in string format. IF 'n' is negative,
** the first position in 'int2str' is filled with '-'. ELSE IF 'n' is greater
** than 0, 'i' is decremented.
*/

/*
** 
** 
** 
** 
** 
*/
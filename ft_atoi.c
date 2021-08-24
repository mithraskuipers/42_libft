/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 20:27:36 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/02/27 17:03:34 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long	outcome;
	long	sign;
	int		i;

	outcome = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' \
	|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		outcome = (outcome * 10) + (str[i] - '0');
		i++;
	}
	return (outcome * sign);
}

/*
** int	main (void)
** {
** 	char	s[] = "1337";
** 	puts("The values below should be identical");
** 	printf("atoi(): \t\t%d\n", atoi(s));
** 	printf("ft_atoi(): \t%d", ft_atoi(s));
** 	return (0);
** }
*/

/*
** FILE NAME:
** ft_atoi.c
**
** DESCRIPTION:
** atoi() function converts the initial portion of the string pointed to by nptr
** to int.
**
** PROTOTYPE AND ARGUMENTS:
** int		atoi(const char *nptr);
**
** nptr:	String representation of an integral number. That is: A pointer to a
** 			string (i.e. array of characters). Said differently: nptr is the
**			string representation of an integral number.
**
** RETURN VALUE:
** The converted value.
*/

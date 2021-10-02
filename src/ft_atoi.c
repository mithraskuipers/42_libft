/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/28 17:13:59 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/30 16:38:14 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n' || c == '\f')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *s)
{
	int	neg;
	int	nbr;
	int	i;

	neg = 1;
	nbr = 0;
	i = 0;

	while (ft_iswhitespace(s[i]))
	{
		i++;
	}
	if (s[i] == '-')
	{
		neg = -1;
	}
	while (s[i] == '-' || s[i] == '+')
	{
		i++;
	}
	while (s[i] != '\0' && ft_isdigit(s[i]))
	{
		nbr = nbr * 10;
		nbr = nbr + (s[i] - '0');
		i++;
	}
	return (nbr * neg);
}
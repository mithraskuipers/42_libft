/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 17:13:29 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/09 19:40:10 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		nbr;
	
	i = 0;
	sign = 1;
	nbr = 0;

	if (!(str))
	{
		return (0);
	}
	
	while (ft_iswhitespace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+') // dit blok was wat steeds fout ging. Eerst was het enkel check of min, en dan sign = -1. Nested if was vereist.
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10) + str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

/*
int	main()
{
	char s[] = "-123";
	printf("%d", ft_atoi(s));
	return (0);
}
*/
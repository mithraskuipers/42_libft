/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 17:13:29 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/21 20:33:41 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n' || 
	c == '\f')
	{
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		nbr;
	
	i = 0;
	sign = 1;
	nbr = 0;

	if (!(str))
		return (0);
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
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
** int	main()
** {
** 	char s[] = "-123";
** 	printf("%d", ft_atoi(s));
** 	return (0);
** }
*/
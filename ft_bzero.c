/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:51:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/27 18:33:18 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_uc;
	size_t			i;

	s_uc = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		s_uc[i] = '\0';
		i++;
	}
}

/*
ft_bzero() first typecasts the void pointer to unsigned char, after which it 
iteratively replaces each char with a null terminator. This process is repeated 
for at most n chars. If n is zero, it does nothing.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:25:50 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/27 23:12:31 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
While the linked list 'lst' has not reached its end, I keep jumping to the
next element in the list. While doing this, I keep track of a counter var 'i', 
that informs me how many elements there inside 'lst'
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:28:07 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/27 23:25:42 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

/*
While the linked list has not come to an end, ft_lstlast(1) checks whether the 
next element of the list is 'out of bounds'. If so, it means that I am currently
already at the last element of the list and I can return that element. If the 
next element is not out of bounds, simply jump to the next element of the list
and continue this process until the condition has not been met.
*/
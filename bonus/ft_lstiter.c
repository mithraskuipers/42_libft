/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 23:56:49 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:51 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
	
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst) || (!(f)))
	{
		return;
	}
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// MAIN??

/*
** Parameters
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to iterate on the list.
** 
** Return value
** None
** 
** External functions
** None
** 
** Description
** Iterates the list 'lst' and applies the function 'f' to the content of each 
** element.
*/
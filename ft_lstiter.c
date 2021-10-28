/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 23:56:49 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/28 16:02:22 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst) || (!(f)))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
ft_lstiter(2) expects a linked list and iterates over each element in the list
and performs the function f() to each of these elements. Here, it literally
accesses the contents of the current element of the list and uses it as input to 
the function f(). Afterwards, it moves over to the next element and continues
this process until each element has been fed to f().
*/
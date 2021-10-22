/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 00:02:32 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:54 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;

	if (!lst || !f)
	{
		return (NULL);
	}
	newlst = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		lst = lst->next;
	}
	return (newlst);
}

/*
** Parameters
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to iterate on the list.
** #3. The adress of the function used to delete the content of an element if 
** needed.
** 
** Return value
** The new list. NULL if the allocation fails.
** 
** External functions
** malloc, free
** 
** Description
** Iterates the list 'lst' and applies the function 'f' to the content of each 
** element. Creates a new list resulting of the successive applications of the 
** function 'f'. The ’del’ function is used to delete the content of an element 
** if needed.
*/
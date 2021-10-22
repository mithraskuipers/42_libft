/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 23:23:34 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/17 23:56:06 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final_element;

	if (!(*lst))
	{
		*lst = new;
		return;
	}
	final_element = ft_lstlast(*lst);
	final_element->next = new;
}

/*
** #include "ft_lstnew.c"
** #include "ft_lstlast.c"
** 
** int main(void)
** {
**     t_list	*linkedlist = NULL;
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'M'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'i'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'t'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'h'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'r'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'a'));
**     ft_lstadd_back(&linkedlist, ft_lstnew((void*)'s'));
**     printf("%s", ft_lstlast(linkedlist));
** }
*/

/*
** Parameters
** #1. The address of a pointer to the first link of a list.
** #2. The address of a pointer to the element to be added to the list.
**
** Return value
** None
**
** External functions
** None
**
** Description
** Adds the element 'new' at the end of the list.
**
** Logic
** If there is no element in the linked list, set 'new' to be the first (and 
** automatically also the final) element of the list. Otherwise, pick the last
** element of the linked list using ft_lstlast() and set it to be equal to 
** 'new'.
*/
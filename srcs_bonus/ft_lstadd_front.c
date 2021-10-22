/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:22:53 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/17 22:59:29 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new))
	{
		return;
	}
	else if (!(*lst))
	{
		(*lst) = new;
	}
	else
	{
		new->next = (*lst);
		(*lst) = new;
	}
}

/*
** #include "ft_lstnew.c"
** #include "ft_lstsize.c"
** 
** int main(void)
** {
**     t_list	*linkedlist = NULL;
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'s'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'a'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'r'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'h'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'t'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'i'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'M'));
**
**     size_t	i;
**     i = 0;
**     while (linkedlist)
**     {
**         printf("Element [%d] is [%s]\n", i, linkedlist);
**         linkedlist = linkedlist->next;
**         i++;
**     }
**     printf("Number of elements in the list: [%d]\n", ft_lstsize(linkedlist));
**     return (0);
** }
*/

/*
** Parameters
** #1. The address of a pointer to the first link of a list.
** #2. The address of a pointer to the element to be added to the list.
** 
** Return value
** None.
** 
** External functions
** None.
** 
** Description
** Adds the element 'new' at the beginning of the lists.
**
** Logic
** Here 'linkedlist' is a variable of type t_list (which is a linked list).
** It is initiated as NULL, but step by step do we add a letter of my name.
** I add the letters in a backwards manner because ft_lstadd_front() adds the 
** content to the front of the linked list. When looping over the elements of 
** the linked list, it now prints [M][i][t][h][r][a][s].
*/
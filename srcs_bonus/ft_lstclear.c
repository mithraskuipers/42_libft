/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 01:08:41 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/18 01:41:54 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_element;

	if ((!(lst)) || (!(del)))
	{
		return;
	}
	while (*lst)
	{
		next_element = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next_element;
	}
}

/*
** void	ft_del(void *content)
** {
**     free(content);
** }
** 
** #include "ft_strdup.c"
** #include "ft_strlen.c"
** #include "ft_lstnew.c"
** #include "ft_lstdelone.c"
** #include "ft_lstadd_back.c"
** #include "ft_lstlast.c"
** 
** int	main(void)
** {
**     t_list *linkedlist1;
**     t_list *linkedlist2;
**     size_t	i;
**	
**     linkedlist1 = ft_lstnew(ft_strdup("Mithras"));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("Kuipers")));
**     linkedlist2 = linkedlist1;
**	
**     i = 0;	
**     printf("\nBefore...\n");
**     while (linkedlist1)
**     {
**         printf("Element [%d] is [%s]\n", i, linkedlist1->content);
**         linkedlist1 = linkedlist1->next;
**         i++;
**     }
**     i = 0;
**     printf("\nAfter...\n");
**     ft_lstclear(&linkedlist2, ft_del);
**     while (linkedlist2)
**     {
**         printf("Element [%d] is [%s]\n", i, linkedlist2->content);
**         linkedlist2 = linkedlist2->next;
**         i++;
**     }
**     printf("\n\n(If it printed nothing it means the ft_lstclear() works)");
** }
*/

/*
** Parameters
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to delete the content of the element.
** 
** Return value
** None
** 
** External functions
** free
** 
** Description
** Deletes and frees the given element and every successor of that element, 
** using the function 'del' and free(3). Finally, the pointer to the list must 
** be set to NULL.
**
** Logic
** This exercise is similar to ft_lstdelone(). However, instead of deleting a
** single element of the linked list, all elements are deleted. This is done
** using a while loop, where as long as there is an element in the list, we
** iteratively call ft_lstdelone() to remove the current element. Prior to
** deletion, we store the location of the next element in a temporary variable
** 'next_element', which, after deletion of the current element, is set to be
** the new location of the current element.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:28:07 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:53 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (NULL);
}

/*
** #include "ft_lstnew.c"
** #include "ft_lstadd_front.c"
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
**     printf("%s", ft_lstlast(linkedlist));
** }
*/

/*
** Parameters
** #1. The beginning of the list.
** 
** Return value
** Last element of the list.
** 
** External functions
** None.
** 
** Description
** Returns the last element of the list.
**
** Logic
** While the linked list has not come to an end, check whether the next element
** of the list is 'out of bounds' the linked list. If so, it means that we are
** currently already at the last element of the list and we can return that
** element. If the next element is not out of bounds, simply jump to the next
** element of the list and repeat.
*/
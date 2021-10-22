/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:25:50 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/17 22:57:24 by mkuipers      ########   odam.nl         */
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
** #include "ft_lstnew.c"
** #include "ft_lstadd_front.c"
** 
** int main(void)
** {
**     t_list	*linkedlist = NULL;
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'s'));
** 	   ft_lstadd_front(&linkedlist, ft_lstnew((void*)'a'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'r'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'h'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'t'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'i'));
**     ft_lstadd_front(&linkedlist, ft_lstnew((void*)'M'));
**     printf("Number of elements in the list: [%d]\n", ft_lstsize(linkedlist));
**     return (0);
** }
*/

/*
** Parameters
** #1. The beginning of the list.
** 
** Return value
** Length of the list.
** 
** External functions
** None.
** 
** Description
** Counts the number of elements in a list.
**
** Logic
** While the linked list has not come to an end, jump to the next element of the
** list and increment an iterator variable. The final value of the iterator
** variable reflects the number of elements in the linked list.
*/
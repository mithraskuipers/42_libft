/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 23:56:43 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:49 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((!(lst)) || (!(del)))
	{
		return;
	}
	del(lst->content);
	free(lst);
}

/*
** void		ft_del(void *content)
** {
**     free(content);
** }
** 
** #include "ft_strdup.c"
** #include "ft_strlen.c"
** #include "ft_lstnew.c"
** 
** int		main(void)
** {
**     t_list	*linkedlist;
**     linkedlist = ft_lstnew(ft_strdup("Mithras"));
**     printf("Before...\n");
**     printf("%s\n", linkedlist->content);
**     ft_lstdelone(linkedlist, ft_del);
**     printf("After...\n");
**     printf("%s\n", linkedlist->content);
** }
*/

/*
** Parameters
** #1. The element to free.
** #2. The address of the function used to delete the content.
** 
** Return value
** None
** 
** External functions
** free
** 
** Description
** Takes as a parameter an element and frees the memory of the element's 
** content using the function 'del' given as a parameter and free the element.
** The memory of 'next' must not be freed.
**
** Logic
** First check whether the user has provided a linked list or a deletion
** function. If so, return. Otherwise, using del() remove the element's content.
*/
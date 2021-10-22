/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 17:14:42 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/17 22:47:00 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;
	
	new_elem = malloc(sizeof(t_list));
	if (!(new_elem))
	{
		return (NULL);
	}
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

/*
** #include "ft_calloc.c"
** #include "ft_strdup.c"
** #include "ft_strlen.c"
** 
** int main(void)
** {
**     t_list	*new_elem;
**     char	s[] = "Mithras";
**     new_elem = ft_lstnew(ft_strdup(s));
**     printf("%s\n", new_elem->content);
**     return (0);
** }
*/

/*
** 
** Parameters
** #1. The content to create the new element with.
**
** Return value
** The new element.
**
** External functions
** malloc
**
** Description
** Allocates (with malloc(3)) and returns a new element. The variable 'content'
** is initialized with the value of the parameter 'content'. The variable 'next'
** is initialized to NULL.
**
** Logic
** In this exercise I had to work with linked lists. In a linked list the 
** elements are not stored at a contiguous location in memory (cf. arrays). The
** elements are linked together using pointers. Basically, each element consists
** of two parts: the 'data' part and the 'next' part. Here, the data part is
** called 'content'.
*/
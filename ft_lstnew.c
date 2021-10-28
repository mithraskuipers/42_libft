/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 17:14:42 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/28 15:56:28 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list) * 1);
	if (!(new_elem))
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

/*
ft_lstnew(1) allocated memory for storing a new list element named 'new_elem'.
Next, the contents of 'new_elem' filled with user-specified variable 'content'.
Finally, the elements' variable 'next' is initialized as NULL.
*/
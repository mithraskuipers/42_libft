/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 23:56:43 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/28 12:16:49 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((!(lst)) || (!(del)))
		return ;
	del(lst->content);
	free(lst);
}

/*
ft_lstdelone(2) first checks whether the user has inputted a linked list or a 
'deletion function'. If not, it returns the function. Otherwise, using del(), 
it removes the content that 'lst' is pointing towards.
*/
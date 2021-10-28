/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 19:22:53 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/27 23:13:16 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new))
		return ;
	else if (!(*lst))
		(*lst) = new;
	else
	{
		new->next = (*lst);
		(*lst) = new;
	}
}

/*
ft_lstadd_front(2) checks whether the pointer to the variable 'new', which is a
struct, exists and returns the function otherwise. If not, then it will check
whether the first element of the double pointer 'lst' contains data. If that is 
not the case, it fills the first element with 'new'. If that is also not the 
case, it knows that the first element of 'lst' contains that and another 
approach is needed to add 'new' to the front of 'lst'. Not it will 'shift' the
contents of 'lst' so that its first element becomes available for storing 'new'.
*/
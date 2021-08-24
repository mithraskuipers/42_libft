/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 19:09:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/29 09:58:50 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (void *)malloc(nitems * size);
	if (!ptr)
	{
		return (0);
	}
	i = 0;
	while (i < (nitems * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*
** FILE NAME:
** ft_calloc.c
**
** DESCRIPTION:
** calloc(2) allocated the requested amount of memory and returns
** a pointer to this block of memory.
**
** PROTOTYPE AND ARGUMENTS:
** void	*calloc(size_t nitems, size_t size)
**
** nitems:	Number of elements to be allocated
** size:	Size of the elements
**
** RETURN VALUE:
** ptr:	Pointer to allocated memory
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 12:01:32 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/21 21:22:52 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void 	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	void			*ptr;
	unsigned char 	*ptr_new;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	ptr_new = (unsigned char *)ptr;
	while (i < count)
	{
		ptr_new[i] = '\0';
		i++;
	}
	return(ptr_new);
}

//#include <stdlib.h>
//#include <stddef.h>

// The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each 
// and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.

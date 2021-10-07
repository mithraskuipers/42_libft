/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 12:01:32 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/06 14:37:48 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stddef.h>

#include "libft.h"

void 	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	// Vanaf hier imiteer ik ft_memset(3)
	size_t i;
	i = 0;
	unsigned char *tmp;
	tmp = (unsigned char *)ptr;
	while (i < count)
	{
		tmp[i] = '\0';
		i++;
	}
	return(tmp);
	//return (ft_memset(ptr, 0, count));
}

// The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each 
// and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
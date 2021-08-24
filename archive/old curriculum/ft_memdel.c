/*
FILE NAME:	
ft_memdel.c

DESCRIPTION:
Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL.

PROTOTYPE AND ARGUMENTS:
void	ft_memdel(void **ap)

ap:		A pointer’s address that needs its memory freed and set to NULL.

RETURN VALUE:
N/A
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
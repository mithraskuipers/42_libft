/*
FILE NAME:	
ft_strnew.c

DESCRIPTION:
ft_strnew allocates memory using malloc() and returns a “fresh” string ending
with ’\0’. Each character of the string is initialized at ’\0’. 

PROTOTYPE AND ARGUMENTS:
char	*ft_strnew(size_t size)

size:	Size of the string to be allocated.

RETURN VALUE:
The string allocated and initialized to 0. If the memory allocation fails 
it returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char*) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_bzero(str, size);
	return (str);
}
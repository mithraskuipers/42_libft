/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 00:57:37 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 10:01:31 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_uchar;
	unsigned char	*src_uchar;
	unsigned char	*buff_uchar;

	dest_uchar = (unsigned char *)dest;
	src_uchar = (unsigned char *)src;

	i = 0;
	if(!(buff_uchar = (unsigned char *)malloc(n * sizeof(unsigned char))))
	{
		return (NULL);
	}
	while (i < n)
	{
		buff_uchar[i] = src_uchar[i];
		i++;
	}
	ft_memcpy(dest_uchar, buff_uchar, n);
	free(buff_uchar);
	return (dest);
}

/*
memmove is simpelweg een veiligere memcpy.
Schijnbaar kunnen er problemen ontstaan als er memory overlap is

Overlap:
Dit is een voorbeeld zin
[--------] dest
    [-----] source

Geen overlap:
Dit is een voorbeeld zin
[--------] dest
             [-----] source

Je voorkomt dat er een directe overlap is tussen DEST en SRC,
door een 3e stuk memory (ook wel bekend als buffer) te introduceren. 
Je plaatst wat je wil van SRC in dit 3e stuk. Daarna zet je over wat zit
in dit 3e stuk in DEST. Het klinkt vreemd, maar zo voorkom je wel dat er tussen
SRC en DEST een overlap is. Voor de overzettingen kun je gewoon memcpy gebruiken.
*/


/*

int main()
{
	char str[50] = "aaa bbb ccc";

	memmove(str, str + 4, 7);
	printf("%s", str);
	return(0);
	
}
*/



/*
DESCRIPTION 

The memmove() function copies n bytes from memory area src to memory area dest.
The memory areas may overlap: copying takes place as though the bytes in src are
first copied into a tempo‐ rary array that does not overlap src or dest, and the
bytes are then copied from the temporary array to dest.

RETURN VALUE

The memmove() function returns a pointer to dest.
*/
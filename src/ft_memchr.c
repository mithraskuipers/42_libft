#include "libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *s_uchar;
	unsigned char c_uchar;

	i = 0;
	s_uchar = (unsigned char *)s;
	c_uchar = (unsigned char)c;

	while(i < n)
	{
		if (s_uchar[i] == c_uchar)
		{
			return((void *)&(s_uchar[i]));
		}
		i++;
	}
	return (NULL);
}

/*
- Als je c niet omzet tot een unsigned char (hier genaamd c_uchar),
dan zal warmachine de laatste test niet halen.

- Als je doet: 'return((void *)s_uchar[i]);', dan krijg je de volgende error:
cast to pointer from integer of different size [-Werror=int-to-pointer-cast]

Dit is omdat s_uchar[i] een karakter is, en je wil die karakter omzetten
tot een void pointer. Zo werkt het niet. Je moet van het karakter het adres
vinden en van dat adres kun je een void pointer maken.

Dus het moet zijn:
return((void *)&(s_uchar[i]));

*/

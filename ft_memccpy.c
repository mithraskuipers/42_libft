/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 11:37:57 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 19:33:09 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		if (s[i] == (unsigned)c)
		{
			return (&d[i] + 1);
		}
		i++;
	}
	return (NULL);
}

/*
** #include <stdio.h>
**
** int main (void)
** {
** 	char s1[] = "Hello";	// dest
** 	char s2[] = "Bye";		// src
**
** 	ft_memccpy (s1, s2, 'B', 3);	// Returns 'Bello'
** 	puts (s1);
** 	return (0);
** }
*/

/*
** // Pointer arithmetic version
** void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
** {
** 	unsigned char		*d;
** 	unsigned const char	*s;
**
** 	d = (unsigned char *)dest;
** 	s = (unsigned char *)src;
** 	while (num)
** 	{
** 		*d = *s;
**		d++;
** 		if (*s == (unsigned)c)
** 		{
** 			return (d);
** 		}
** 		s++;
** 		num--;
** 	}
** 	return (NULL);
** }
*/

/*
** FILE NAME:
** ft_memccpy.c
**
** DESCRIPTION:
** memccpy(4) copies the first n bytes pointed to by src to the buffer pointed
** to by dest, stopping after the first occurrence of byte c (converted to an
** unsigned char) is copied OR after n bytes are copied (whatever comes first).
** src and dest are not allowed to overlap.
**
** PROTOTYPE AND ARGUMENTS:
** void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
**
** dest:	Array to which src will be copied to
** src:		String to be copied
** c:		Value you want to stop copying at.
** num:		Number of characyers to copy
**
** RETURN VALUE:
** Pointer to the byte AFTER the copy of c in dest, or a null pointer if c was
** not found in the first n bytes of src.
**
** EXPLANATION:
** The text below is copy-pasted from my ft_memcpy.c explanation.
** Function typecasts the received dest and src arguments to unsigned char type,
** named d and s, respectively. By typecasting to char the contents at the
** memory location are interpreted by the ASCII table. Because we want the
** contents to be interpretable using the ASCII table, every value needs to be
** positive. Hence the use of 'unsigned'. Note: Without unsigned this example
** works as well, but it is bad habit.
**
** EXTRA:
** return (d + i + 1) also works
*/

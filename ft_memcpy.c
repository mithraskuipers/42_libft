/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 20:20:53 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/12/26 18:38:05 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
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
		i++;
	}
	return (d);
}

/*
** #include <stdio.h>
**
** int main (void)
**  {
** 	char s1[] = "Hello";	// dest
** 	char s2[] = "Bye";		// src
**
** 	ft_memcpy (s1, s2, 2);	// Returns 'Byllo'
** 	puts (s1);
** 	return (0);
** }
*/

/*
** // Pointer arithmetic version
** void	*ft_memcpy(void *dest, const void *src, size_t num)
** {
** 	unsigned char		*d;
** 	unsigned const char	*s;
**
** 	d = (unsigned char *)dest;
** 	s = (unsigned char *)src;
** 	while (num)
** 	{
** 		*d++ = *s;
** 		s++;
** 		num--;
** 	}
** 	return (dest);
** }
*/

/*
** FILE NAME:
** ft_memcpy.c
**
** DESCRIPTION:
** memcpy(3) copies the first n bytes pointed to by src to the buffer pointed
** to by dest. src and dest are not allowed to overlap.
**
** PROTOTYPE AND ARGUMENTS:
** void	*ft_memcpy(void *dest, const void *src, size_t num)
**
** dest:	Array to which src will be copied to
** src:		The string to be copied
** num:		Number of characyers to copy
**
** RETURN VALUE:
** Pointer to s1.
**
** EXPLANATION:
** Function typecasts the received dest and src arguments to unsigned char type,
** named d and s, respectively. By typecasting to char the contents at the
** memory location are interpreted by the ASCII table. Because we want the
** contents to be interpretable using the ASCII table, every value needs to be
** positive. Hence the use of 'unsigned'. Note: Without unsigned this example
** works as well, but it is bad habit.
*/

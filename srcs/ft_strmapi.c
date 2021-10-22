/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 15:15:18 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/23 00:51:16 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char        *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *s_new;
    
    s_new = ft_strdup(s);
    i = 0;
    while (s[i])
    {
        s_new[i] = (*f)(i, s[i]);
        i++;
    }
    return (s_new);
}

/*
** #include "ft_strdup.c"
** #include "ft_strlen.c"
** char ft_plusone(unsigned int i, char c)
** {
**     i = i + 1;
**     return (c + 1);
** }
** 
** int main(void)
** {
**     char s[] = "12345678";
**     printf("%s", ft_strmapi(s, &ft_plusone));
**     return (0);
** }
*/

/*
** Parameters
** #1. The string on which to iterate.
** #2. The function to apply to each character.
** 
** Return value
** The string created from the successive applications of 'f'. Returns NULL if
** the allocation fails.
** 
** Description
** Applies the function 'f' to each character of the string 's' , and passing
** its index as first argument to create a new string (with malloc(3)) resulting
** from successive applications of 'f'.
*/
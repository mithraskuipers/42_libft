/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/10 10:01:53 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/20 19:19:22 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    size_t  s1_len;
    size_t  s2_len;
    char    *s_join;
    size_t  s_join_len;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    s_join_len = s1_len + s2_len;
    i = 0;
    j = 0;
    
    if (!(s_join = malloc((s_join_len + 1) * sizeof(char))))
    {
        return (NULL);
    }
    while (i < s1_len)
    {
        s_join[i] = s1[i];
        i++;
    }
    while (j < s2_len)
    {
        s_join[j + i] = s2[j];
        j++;
    }
    s_join[j + i] = '\0';
    return (s_join);    
}

/*
#include "ft_strlen.c"
int     main()
{
    char    s1[] = "Mithras";
    char    s2[] = "Kuipers";

    printf("%s \n", ft_strjoin(s1, s2));
    return (0);
}
*/

/*
Function name
ft_strjoin

Prototype
char *ft_strjoin(char const *s1, char const *s2);

Turn in files
-

Parameters
#1. The prefix string.
#2. The suffix string.

Return value
The new string. NULL if the allocation fails.

External functs.
malloc

Description
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of 's1' and 's2'.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/10 12:05:03 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/15 23:31:01 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isinset(char c, char const *set)
{
    size_t  i;
    i = 0;

    while (set[i])
    {
        if (c == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t          i;
    size_t          j;
    char            *s2;

    i = 0;
    j = ft_strlen(s1);
    if ((!(s1)) || (!(set)))
        return (NULL);
    while (ft_isinset(s1[i], set))
        i++;
    if (!(j > i))
        return (ft_strdup(""));
    while (ft_isinset(s1[j-1], set))
        j--;
    s2 = ft_substr(s1, i, (j-i));
    return (s2);
}

//ft_strtrim.c:56:12: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]

/*
#include "ft_strdup.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include "ft_strchr.c"
int     main()
{
    //const char    *s1 = "lorem ipsum dolor sit amet";
    //const char    *s2 = "te";

    const char    *s1 = "            ";
    const char    *s2 = " ";

    printf("Original:\n");
    printf("%s\n", s1);
    printf("set:\n");
    printf("%s\n", s2);
    printf("My output:\n");
    printf("%s\n", ft_strtrim(s1, s2));
    return (0);
}
*/

/*
Function name
ft_strtrim

Prototype
char *ft_strtrim(char const *s1, char const *set);

Turn in files
-

Parameters
#1. The string to be trimmed.
#2. The reference set of characters to trim.

Return value
The trimmed string. NULL if the allocation fails.

External functs.
malloc

Description
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
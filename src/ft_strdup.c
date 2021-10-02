/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/25 22:38:52 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/26 11:49:46 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t ft_strlen(const char *s);

char    *ft_strdup(const char *s)
{
    char    *s_dup;
    size_t  i;

    i = 0;
    if(!(s_dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
    {
        return (NULL);
    }
    while (s[i])
    {
        s_dup[i] = s[i];
        i++;
    }
    s_dup[i] = '\0';
    return (s_dup);
}
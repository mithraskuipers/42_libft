/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 19:42:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/21 21:21:47 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	size_t	i;
	char	*dup;

	s1_len = ft_strlen(s1);
	i = 0;
	dup = malloc((s1_len + 1) * sizeof(char));
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include "ft_strlen.c"
int	main()
{
	char s[] = "Mithras";
	printf("%s", strdup(s));
	printf("\n");
	printf("%s", ft_strdup(s));
	return (0);
}

DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer
may subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/
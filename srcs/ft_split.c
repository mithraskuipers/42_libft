/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 20:11:24 by mkuipers      #+#    #+#                 */
/*   Updated: 2021/10/21 21:44:30 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_nparts(const char *s, char c)
{
	size_t	i;
	size_t	nparts;

	i = 0;
	nparts = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			nparts++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		else if (s[i] && s[i] == c)
		{
			i++;
		}
	}
	return (nparts);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wordn;
	char	**dp;
	size_t	wordstart;
	size_t	nparts;
	
	nparts = ft_nparts(s, c);
	dp = malloc((sizeof(char *) * nparts) + 1);

	//dp = malloc(sizeof(char *) * (nparts + 1));



	wordn = 0;
	if (!dp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		wordstart = i;
		while (s[i] && s[i] != c)
			i++;
		dp[wordn] = ft_substr(s, wordstart, (i - wordstart));
		wordn++;
	}
	dp[wordn] = NULL;
	return (dp);
}
//Ik ben een draak

size_t	ft_nparts(const char *s, char ws);
char	**ft_split(char const *s, char c);
size_t	ft_nparts(const char *s, char ws);
#include "ft_substr.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
/*
int		main(void)
{
	size_t	i;
	size_t	nparts;
	char	**dp;
	const char	s[] = "Ik ben een draak";


	i = 0;
	nparts = ft_nparts(s, ' ');
	dp = ft_split(s, ' ');

	while(1);

	printf("%lu\n", nparts);
	while (dp[i])
	{
		printf("%s\n", dp[i]);
		i++;
	}
	

	size_t j;
	j = 0;
	while (dp[j])
	{
		free (dp[j]);
		j++;
	}
	free (dp);
	
	while(1);
	return (0);
}
*/

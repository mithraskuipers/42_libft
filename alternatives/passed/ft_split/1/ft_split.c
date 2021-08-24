/*
Returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. 
The array must be ended by a NULL pointer. Returns NULL if the allocation fails.
*/

#include "libft.h"
#include <stdio.h>

int ft_nparts(char const *str, char delim)
{
	int nparts;

	nparts = 0;
	while (*str && *str == delim)
	{
		str++;
	}
	while (*str)
	{
		if (*str != delim && (*(str + 1) == delim || *(str + 1) == '\0'))
		{
			nparts = nparts + 1;
		}
		str++;
	}
	return (nparts);
}

char *ft_word_splitter(char *d, char *f)
{
	char *p;
	size_t i;

	p = (char *)malloc(f - d + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (d != f)
	{
		p[i] = *d;
		d++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

static void	freeall(int i, char **p)
{
	int	j;

	j = -1;
	while (j++ <= i)
	{
		free(p[j]);
	}
	free(p);
}

char **ft_split(char const *s, char v)
{
	char **p;
	char *f;
	size_t i;

	p = (char **)malloc(sizeof(char *) * (count(s, v) + 1));
	if (s == NULL || !p)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == v)
			s++;
		f = (char *)s;
		while (*f != v && *f != '\0')
			f++;
		if (s == f)
			break ;
		p[i] = ft_word_splitter((char *)s, f);
		if (!p[i])
			freeall(i, p);
		s = f;
		i++;
	}
	p[i] = NULL;
	return (p);
}


#include <stdio.h>
#include "libft.h"

int 	main(int argc, char **argv)
{
	char	sen[] = "Hello there! My name is Mithras Ma QaM";
 	char 	**splitted_sen;

 	splitted_sen = ft_split(sen, 'M');
 	printf("%s\n", splitted_sen[0]); //should print "Hello there!"
 	printf("%s\n", splitted_sen[1]); //should print "y name is "
 	printf("%s\n", splitted_sen[2]); //should print "ithras"
 	printf("%s\n", splitted_sen[3]);
 	//printf("%s\n", splitted_sen[4]);
 	return (0);
}

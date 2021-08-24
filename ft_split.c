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



static void freeall(int i, char **p)
{
	int	j;

	j = -1;
	while (j++ <= i)
	{
		free(p[j]);
	}
	free(p);
}

char *ft_word_splitter(char const *str, char *f)
{
	char *p;
	int i;
	str = (char *)str;

	p = (char *)malloc(f - str + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str != f)
	{
		p[i] = *str;
		str++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

char **ft_split(char const *str, char delim)
{
	char **array_of_strings;
	char *f;
	int i;

	array_of_strings = (char **)malloc(sizeof(char *) * (ft_nparts(str, delim) + 1));
	if (str == NULL || !array_of_strings)
	{
		return (NULL);
	}
	i = 0;
	while (*str != '\0')	// loop until the end
	{
		while (*str == delim)	// if we crossed the delimiter
		{
			str++; // go immediately past it
		}
		f = (char *)str; // store the position right after delimiter. Typecast necssary because str is const. Cant put const into non const without typecast.
		while (*f != delim && *f != '\0') // find out how much space is from this point onwards
		{
			f++;
		}
		if (str == f) // ???
		{
			break;
		}
		array_of_strings[i] = ft_word_splitter(str, f);
		if (!array_of_strings[i])
		{
			freeall(i, array_of_strings);
		}
		str = f;
		i++;
	}
	array_of_strings[i] = NULL;
	return (array_of_strings);
}

/*
#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	char sen[] = "Hello there! My name is Mithras Ma QaM";
 	char **splitted_sen;

 	splitted_sen = ft_split(sen, 'M');
 	printf("%s\n", splitted_sen[0]); //should print "Hello there!"
 	printf("%s\n", splitted_sen[1]); //should print "y name is "
 	printf("%s\n", splitted_sen[2]); //should print "ithras"
 	printf("%s\n", splitted_sen[3]);
 	//printf("%s\n", splitted_sen[4]);
 	return (0);
}
*/
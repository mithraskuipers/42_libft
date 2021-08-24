/*
Returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. 
The array must be ended by a NULL pointer. Returns NULL if the allocation fails.
*/

#include "libft.h"
void ft_createsplit(char **array_of_strings, char const *s, char delim);
int ft_addpart(char **array_of_strings, const char *prev, int size, char delim);
int ft_partcounter(const char *str, char delim);

char **ft_split(char const *str, char delim)
{
	char **array_of_strings;

	if (!str)
	{
		return (NULL);
	}
	if (!(array_of_strings = (char **)malloc((ft_partcounter(str, delim) + 1) * sizeof(char *))))
	{
		return (NULL);
	}
	ft_createsplit(array_of_strings, str, delim);
	return (array_of_strings);
}

/*
int delim_pos_finder(char const *str, int i, char delim, int *delim_pos)
{
	if (str[i] == delim || str[i] == '\0')
	{
		*delim_pos = i;
	}
	if (str[i] == '\0')
	{
		return (0);
	}
}
*/
	

void ft_createsplit(char **array_of_strings, char const *str, char delim)
{
	int i;
	int j;
	int pos_distance;
	int start_pos;
	int delim_pos;

	i = 0;
	j = 0;
	start_pos = 0;
	delim_pos = 0;
	while (1)
	{
		/*
		if (!(delim_pos_finder(str, i, delim, &delim_pos)))
		{
			break;
		}
		*/
		///*
		if (str[i] == delim || str[i] == '\0') // if we found a cutoff point
		{
			delim_pos = i; // store the cutoff point
		}
		//*/
		pos_distance = delim_pos - start_pos;
		if (pos_distance > 1 || (pos_distance == 1 && str[i - 1] != delim))
			j = j + ft_addpart(&array_of_strings[j], &str[start_pos], pos_distance, delim);

		start_pos = delim_pos;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	array_of_strings[j] = NULL;
}

int ft_addpart(char **array_of_strings, const char *prev, int size, char delim)
{
	if (*prev == delim)
	{
		prev++;
		size--;
	}
	*array_of_strings = (char *)malloc((size + 1) * sizeof(char));
	ft_strlcpy(*array_of_strings, prev, size + 1);
	return (1);
}

int ft_partcounter(const char *str, char delim)
{
	int i;
	int start_pos;
	int delim_pos;
	int pos_distance;
	int nparts;

	i = 0;
	start_pos = 0;
	delim_pos = 0;
	nparts = 0;
	while (1)
	{
		/*
		if (!(delim_pos_finder(str, i, delim, &delim_pos)))
		{
			break;
		}
		*/
		///*
		if (str[i] == delim || str[i] == '\0') // if we found a cutoff point
		{
			delim_pos = i; // store the cutoff point
		}
		//*/
		pos_distance = delim_pos - start_pos;
		start_pos = delim_pos;
		if (pos_distance != 0 || (pos_distance == 1 && str[(i - 1)] != delim))
		{
			nparts++;
		}
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	//printf("%d \n", nparts);
	return (nparts);
}

/*
#include <stdio.h>
#include "ft_strlcpy.c"
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
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 15:30:13 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/18 23:56:32 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	i = 0;
	if ((!(s)) || (!(f)))
	{
		return;
	}
	while (s[i])
	{
		f(i, (s + i)); // of &(s[i])
		i++;
	}
}

/*
** void	ft_tolower_void(void *c)
** {
**     char	*c_char;
**     int		i;
**
**     i = 0;
** 	   c_char = (char *)c;
**     while (c_char[i])
**     {
**         c_char[i] = ft_tolower(c_char[i]);
**         i++;
**     }
** }
** 
** #include "ft_tolower.c"
** #include "ft_strdup.c"
** #include "ft_lstnew.c"
** #include "ft_lstadd_back.c"
** #include "ft_lstlast.c"
** #include "ft_strlen.c"
** 
** int		main(void)
** {
**     t_list	*linkedlist1;
**     t_list	*linkedlist2;
** 
**     linkedlist1 = NULL;
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("M")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("I")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("T")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("H")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("R")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("A")));
**     ft_lstadd_back(&linkedlist1, ft_lstnew(ft_strdup("S")));
** 
**     linkedlist2 = linkedlist1;
**     printf("Before ft_lstiter()...\n");
**     while (linkedlist1)
**     {
**         printf("%s", linkedlist1->content);
**         linkedlist1 = linkedlist1->next;
**     }
**     printf("\n");
**     ft_lstiter(linkedlist2, ft_tolower_void);
**     printf("After' ft_lstiter()...\n");
**     while (linkedlist2)
**     {
**         printf("%s", linkedlist2->content);
**         linkedlist2 = linkedlist2->next;
**     }
** }
*/

/*
** Parameters
** #1. The string on which to iterate.
** #2. The function to apply to each character.
** 
** Return value
** None.
** 
** External functions
** None.
**
** Description
** Applies the function f to each character of the string passed as argument, 
** and passing its index as first argument. Each character is passed by address
** to f to be modified if necessary.
*/
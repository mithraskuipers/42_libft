/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/24 20:05:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/08/25 23:43:16 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# define NEWLINE '\n'

#include <stdio.h>		// printf
#include <stdlib.h>		// malloc
#include <unistd.h>		// read/write
#include <fcntl.h>		// open





int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);










size_t ft_strlen(const char *s);
char *ft_strdup(const char *s);


#endif
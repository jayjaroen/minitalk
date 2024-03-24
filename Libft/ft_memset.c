/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:13:12 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/13 15:03:35 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The memset() function writes len bytes of value c
            (converted to an unsigned char) to the string b.
Return: The memset() function returns its first argument.
*/
// #include <stdio.h>
// #include <string.h>
void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	c = (unsigned char)c;
	while (i < len)
	{
		*p = c;
		i++;
		p++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char word[10];
	char string[5];

	printf("the result of memset:  %s\n", (char *)memset(word, 'J', 5));
	printf("the result of my function: %s\n", (char *)ft_memset(word, 'J', 5));

	printf("the result of memset:  %s\n", (char *)memset(string, 'A', 3));
	printf("the result of my function: %s\n",(char *)ft_memset(string, 'A', 3));

	printf("the result of memset:  %s\n", (char *)memset(string, 'Y', 1));
	printf("the result of my function: %s\n",(char *)ft_memset(string,'Y', 1));
}
*/

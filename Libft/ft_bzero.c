/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:06:31 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/09 21:15:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>
/*
Description: The bzero() function writes n zeroed bytes to the string s.
            If n is zero, bzero() does nothing.
Doesn't need to handle segfault
*/
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
// int main(void)
// {
//   ///// zero input ///
//   char  *s;
//   // char  *i;

//   s = "hello";
//   // i = NULL;
//   bzero(s, 3);
//   // ft_bzero(i, 10);
//   // printf("the result of bzero: %s\n", s);
//   // printf("the result of my function: %s\n", i);
//   return (0);
// }

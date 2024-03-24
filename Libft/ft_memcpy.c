/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:12:19 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/13 15:12:54 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The memcpy() function copies n bytes from memory area src
			to memory area dst.  If dst and src overlap, behavior is undefined.
			Applications in which dst and src might overlap should use
			memmove(3) instead.
Return: The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int main(void)
// {
//   ///////////// overflow/////////////////
// //   char source[] = "hello world";
// //   char dest[] = "hahaha";
// //   char source1[] = "hello world";
// //   char dest1[] = "hahaha";

// //   memcpy(dest, source, sizeof(source));
// //   ft_memcpy(dest1, source1, sizeof(source1));
// //   printf("this is the result of memcpy: %s\n", dest);
// //   printf("this is the result from my function: %s\n", dest1);
// //   return (0);
// ///////////////dst & src overlapse///////////
// ///////////return bus error//////////////////
// // char	*src;
// // char	*dst;

// // src = "hello";
// // dst = src + 1;
// // // memcpy(dst, src, 3);
// // ft_memcpy(dst, src, 3);
// // printf("The result: %s\n", dst);
// ////////////////NULL////////////////
// char	*src;
// char	*dst;

// // dst = "Hello";
// memcpy(dst, src, 3);
// printf("The result: %s\n", dst);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:12:29 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/12 23:51:57 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>
// description: memmove copies len bytes from string src to string dst. The two
// strings may overlap; the copy is always done is a non-destructive manner
// memmove return the original value of dst
// don't need to account for memory overflow
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst == NULL && src == NULL))
		return (NULL);
	if (src < dst)
	{
		while (len-- != 0)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	}
	else
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
// int main(void)
// {
// 	char	src[] = "1234567";
// 	char	*dst;
// 	char	*dst2;

// 	dst = src + 1;
// 	dst2 = NULL;
// 	printf("%p	%s\n", src, src);
// 	printf("%p	%s\n", dst, dst);
// 	/////// the case that both src and dest are NULL /////////////
// 	printf("the result of memmove function: %s\n", memcpy(dst,src,1));
// 	printf("%p	%s\n", src, src);
// 	printf("the result of my function: %s\n", ft_memmove(,"dd",5));
// 	printf("the result of memmove function: %s\n", memmove("","dd",5));
// 	printf("the result of my function: %s\n", ft_memmove("","dd",5));
// 	overlapse test case
// }

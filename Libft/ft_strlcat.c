/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:15:00 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/13 17:26:02 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Behavior: strlcat append string src to the end of dest.
// Strlcat append at most dstsize - strlen(dst) - 1
// Parameters: dst (src to be appended), src,
//             dstsize (maximum size of destination buffer + null terminator)
//             that can be store in dst
// Return: the initial length of dst + the length of src.
// strlcat ensures that the concatenated result will fit within
// the destination buffer without causing a buffer overflow.
// If the truncation occured, it returned the destination string
// plus the number that would have been copied, but not more than size - 1
// #include <stdio.h>
// #include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
// int	main(void)
// {
// 	// char	*src;
// 	// char	dst[20];
// 	// // int		i;
// 	// i = 0;
// 	// while (i < 3)
// 	// {
// 	// 	dst[i] = 'p';
// 	// 	i++;
// 	// }
// 	// src = "12345";
// 	printf("%zu\n", ft_strlcat(0, 0, 0));
// 	// printf("%zu\n", strlcat(0, 0, 0));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:06:47 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/11 23:21:02 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The malloc(), calloc(), valloc(), realloc(), and reallocf()
              functions allocate memory.  The allocated memory is aligned
              such that it can be used for any data type,
              including AltiVec- and
              SSE-related types.  The aligned_alloc() function
              allocates memory with the requested alignment.
              The free() function frees allocations that were created
              via the preceding allocation functions.
The calloc() function contiguously allocates enough space
for count objects that are size bytes of memory each and returns
a pointer to the allocated memory.
Return: The allocated memory is filled with bytes of value zero.***
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (count * size));
	return (str);
}

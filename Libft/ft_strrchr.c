/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:16:02 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:16:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Description: The strrchr() function is identical to strchr(), 
//except it locates the last occurrence of c.
// Return value: The functions strchr() and strrchr() return a pointer
// to the located character, or NULL if the character does not appear
// in the string.
char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i)
	{
		i--;
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}

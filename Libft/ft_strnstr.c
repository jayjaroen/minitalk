/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:15:53 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:15:56 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The strnstr() function locates the first occurrence of
	the null-terminated  string needle in the string haystack,
	where not more than len characters are searched.
	 Characters that appear after a ‘\0’ character are not
     searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.
Return:  If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	w;

	if (!*needle)
		return ((char *)(haystack));
	i = 0;
	while (i < len && *(haystack + i))
	{
		w = 0;
		while (*(haystack + i + w) == *(needle + w) && i + w < len)
		{
			if (*(needle + w + 1) == '\0')
				return ((char *)(haystack + i));
			w++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:16:20 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/14 13:09:06 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Allocates (with malloc(3)) and returns a substring
              from the string ’s’.
              The substring begins at index ’start’ and is of
              maximum size ’len’.
Parameters: s:  The string from which to create the substring.
            start:  The start index of the substring in the
            string ’s’.
            len:  The maximum length of the substring.
Return: The substring.
        NULL if the allocation fails.
Think about if len is greater string || starting index is greater than string
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start > s_len)
	{
		start = s_len;
		len = 0;
	}
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}

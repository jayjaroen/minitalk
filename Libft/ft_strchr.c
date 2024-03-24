/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:14:22 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 11:31:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Description: The strchr() function locates the first occurrence of c
//(converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string;
// therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
// Return: The functions strchr() and strrchr() return a pointer to the
// located character, or NULL if the character does not appear in the string.
// #include <stdio.h>
// #include <string.h>
char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	i = (unsigned char)c;
	str = (unsigned char *)s;
	while (*str != '\0' && *str != i)
		str++;
	if (*str == i)
		return ((char *)str);
	return (NULL);
}
// int	main(void)
// {
// 	printf("the strchr function: %s\n", strchr(" dfdf ",' '));
// 	printf("the my function: %s\n", ft_strchr(" dfdf",' '));
// }
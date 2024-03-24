/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:15:34 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/14 12:58:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
Description: Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
Parameters: 1) s: the string on which to iterate.
			2) f: the function to apply to each character && its index
Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.*/
// #include <stdio.h>
// char	my_function(unsigned int i, char c)//upcase the odd character
// {
// 	if ( i % 2 != 0)
// 	{
// 		if (c >= 99 && c <= 122)
// 			return c - 32;
// 	}
// 	return (c);
// }
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	char	*s;
// 	char	(*f)(unsigned int, char);

// 	f = my_function;
// 	s = "helloworld";
// 	printf("%s\n", ft_strmapi(s,f));
// }

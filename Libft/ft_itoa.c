/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:08:28 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/13 12:43:36 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
convert integer to string, need to take care of the negative sign
Description: Allocates (with malloc(3)) and returns a string representing 
the integer received as an argument. Negative numbers must be handled.
Return value: The string representing the integer. 
NULL if the allocation fails.
*/
static size_t	ft_numlen(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;
	long	num;

	num = n;
	len = ft_numlen(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		num *= -1;
	i = 0;
	while (i < len)
	{
		*(str + (len - i - 1)) = (num % 10) + '0';
		num /= 10;
		i++;
	}
	if (n < 0)
		*str = '-';
	*(str + len) = '\0';
	return (str);
}

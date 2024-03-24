/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:07:03 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:07:09 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of isalnum: %d\n",isalnum('0'));
	printf("the result of my function: %d\n",ft_isalnum('0'));
	printf("the result of isalnum: %d\n",isalnum('9'));
	printf("the result of my function: %d\n",ft_isalnum('9'));
	printf("the result of isalnum: %d\n",isalnum('A'));
	printf("the result of my function: %d\n",ft_isalnum('A'));
	printf("the result of isalnum: %d\n",isalnum('c'));
	printf("the result of my function: %d\n",ft_isalnum('c'));
	printf("the result of isalnum: %d\n",isalnum('*'));
	printf("the result of my function: %d\n",ft_isalnum('*'));
}*/

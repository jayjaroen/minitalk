/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:16:41 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:16:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*int	main(void)
{
	printf("the result of toupper: %c\n",toupper('A'));
	printf("the result of my function: %c\n", ft_toupper('A'));
	printf("the result of toupper: %c\n",toupper('c'));
	printf("the result of my funtion: %c\n", ft_toupper('c'));
	printf("the result of toupper: %c\n", toupper(1));
	printf("the result of my function: %c\n", ft_toupper(1));
}*/

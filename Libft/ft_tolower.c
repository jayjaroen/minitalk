/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:16:30 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:16:33 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*int	main(void)
{
	printf("the result of tolower: %c\n", tolower('C'));
	printf("the result of my function: %c\n", ft_tolower('C'));
	printf("the result of tolower: %c\n", tolower('a'));
	printf("the result of my function: %c\n", tolower('a'));
	printf("the result of tolower: %c\n", tolower('1'));
	printf("the result of my function: %c\n", tolower('1'));
}*/

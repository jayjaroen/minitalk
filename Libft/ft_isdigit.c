/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:07:59 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:08:03 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of the isdigit function: %d\n", isdigit('0'));
	printf("the result of my function: %d\n", ft_isdigit('0'));
	printf("the result of the isdigit function: %d\n", isdigit('9'));
	printf("the result of my function: %d\n", ft_isdigit('9'));
	printf("the result of the isdigit function: %d\n", isdigit('e'));
	printf("the result of my function: %d\n", ft_isdigit('e')); 
}*/

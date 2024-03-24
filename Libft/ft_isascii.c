/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:07:40 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:07:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of isacii %d\n",isascii('A'));
	printf("the result of my function %d\n", ft_isascii('A'));
	printf("the result of isacii %d\n",isascii(1000));
	printf("the result of my function %d\n", ft_isascii(1000));		
}*/

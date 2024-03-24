/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:08:11 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:08:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the return of isprint: %d\n", isprint('\n'));
	printf("the return of myfunction" "%d\n", ft_isprint('\n'));
	
	printf("the return of isprint: %d\n", isprint('o'));
	printf("the return of myfunction" "%d\n", ft_isprint('o'));
	
	printf("the return of isprint: %d\n", isprint('~'));
	printf("the return of myfunction" "%d\n", ft_isprint('~'));
	
	printf("the return of isprint: %d\n", isprint('5'));
	printf("the return of myfunction" "%d\n", ft_isprint('5'));
	
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:33:42 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/16 16:04:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// To be deleted later, the library is also in ft_printf && lifbt
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	// change to ft_printf
	printf("My Server PID is: %d\n", getpid());
	
}
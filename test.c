/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:15:24 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/17 15:24:13 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	mySignalHandler(int mySignal)
{
	if (mySignal == SIGTERM)
	{
		printf("SIGTERM\n");
		printf("My Handle with signal %d", mySignal);
	}
	if (mySignal == SIGKILL) // not displayed the program killed instantly
	{
		printf("SIGKILL signal received\n");
	}
}

int	main(void)
{
	int	i;

	i = 1;
	printf("checking\n");
	signal(SIGTERM, mySignalHandler);
	signal(SIGKILL, mySignalHandler);
	while (i)
	{
		printf("%d\n", i);
		i++;
		sleep(1);
	}
	return(0);
}
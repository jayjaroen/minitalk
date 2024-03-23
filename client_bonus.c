/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:52:47 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/23 18:03:37 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/minitalk.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/// TO DO ////
// 1) include libft
// 2) edit atoi, strlen, isdigit, printf
// 3) delete the libs above

void	handle_signal(int signum)
{
	if (signum == SIGUSR1)
		printf("Received the signal from the server.\n");
	else
		printf("hi");
}
void	send_to_server(pid_t pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (((c >> i) & 1) == 1)
			{
				kill(pid, SIGUSR2);
				printf("send2\n");
			}
			else
			{
				kill(pid, SIGUSR1);
				printf("sending1\n");
			}
			usleep(300);
		}
	}
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;
	int	i;

	i = 0;
	if (argc != 3 || !strlen(argv[2]))
	{
		printf("Wrong arguments\n");
		return (1);
	}
	while (argv[1][i])
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Wrong format. Server PID is not digit\n");
			return (1);
		}
		i++;
	}
	server_pid = atoi(argv[1]);
	send_to_server(server_pid, argv[2]);	
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		usleep(300);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:23:18 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 14:58:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/minitalk.h"

static void	signal_handler(int signum, siginfo_t *info, void *context)
{
	static unsigned char	signal_byte;
	static int				signal_count;
	static pid_t			client;

	(void)context;
	if (client != info->si_pid)
	{
		client = info->si_pid;
		signal_byte = 0;
		signal_count = 0;
	}
	if (signum == SIGUSR2)
		signal_byte |= 1;
	signal_count++;
	kill(client, SIGUSR1);
	if (signal_count == 8)
	{
		signal_count = 0;
		write (1, &signal_byte, 1);
		signal_byte = 0;
	}
	else
		signal_byte <<= 1;
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("My Server PID is: %d\n", getpid());
	action.sa_sigaction = signal_handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_SIGINFO;
	ft_printf("Wating for the signal\n");
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (1)
		usleep(300);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:06:42 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 15:26:38 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/minitalk.h"

int	g_signal_received;

void	handle_signal(int signum)
{
	(void)signum;
	g_signal_received = 1;
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
			g_signal_received = 0;
			if (((c >> i) & 1) == 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			while (!g_signal_received)
				pause();
		}
	}
	exit (0);
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;
	int		i;

	i = 0;
	if (argc != 3)
	{
		ft_putendl_fd("Wrong arguments\n", 2);
		return (1);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			ft_putendl_fd("Wrong format. Server PID is not digit\n", 2);
			return (1);
		}
		i++;
	}
	server_pid = ft_atoi(argv[1]);
	signal(SIGUSR1, handle_signal);
	send_to_server(server_pid, argv[2]);
	g_signal_received = 0;
	while (1)
		pause();
	return (0);
}

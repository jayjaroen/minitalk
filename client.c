/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:06:42 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 13:43:44 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/minitalk.h"

void	handle_signal(int signum)
{
	if (signum == SIGUSR2)
		ft_printf("Received the signal from the server.\n");
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
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(300);
		}
	}
	exit (0);
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;
	int		i;

	i = 0;
	if (argc != 3 || !ft_strlen(argv[2]))
	{
		ft_printf("Wrong arguments\n");
		return (1);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			ft_printf("Wrong format. Server PID is not digit\n");
			return (1);
		}
		i++;
	}
	server_pid = ft_atoi(argv[1]);
	send_to_server(server_pid, argv[2]);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		usleep(300);
	return (0);
}

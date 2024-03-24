/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:48:57 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 13:50:43 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_print(long num, int base, int *count, char *ptr)
{
	char	str[20];
	size_t	j;
	size_t	p;
	int		sign;

	j = 19;
	p = j;
	str[j] = '\0';
	sign = 0;
	if (num < 0)
	{
		num *= -1;
		sign = 1;
	}
	while (num / base)
	{
		str[--j] = ptr[num % base];
		num /= base;
	}
	str[--j] = ptr[num % base];
	if (sign)
		str[--j] = '-';
	if (ft_putstr(&str[j]) == -1)
		return ;
	*count = p - j;
}

void	ft_printpointer(unsigned long num, int base, int *count, char *ptr)
{
	char	str[20];
	size_t	j;
	size_t	p;

	j = 19;
	p = j;
	str[j] = '\0';
	while (num / base)
	{
		str[--j] = ptr[num % base];
		num /= base;
	}
	str[--j] = ptr[num % base];
	if (ft_putstr(&str[j]) == -1)
		return ;
	*count = p - j;
}

int	ft_putchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		if (ft_putchar((int)*str) == -1)
			return (-1);
		str++;
		count++;
	}
	return (count);
}

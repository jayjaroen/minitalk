/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:22:41 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 11:08:26 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (spec == '%')
		count += ft_putchar('%');
	else if (spec == 'p')
	{
		count += write(1, "0x", 2);
		count += ft_putpointer(va_arg(ap, void *));
	}
	else if (spec == 'i' || spec == 'd')
		count += ft_putnum(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_putunsigned(va_arg(ap, unsigned int));
	else if (spec == 'x' || spec == 'X')
		count += ft_puthex(va_arg(ap, int), spec);
	else
		return (count = -1);
	return (count);
}

int	ft_printf(const char *args, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, args);
	if (!args)
		return (-1);
	count = 0;
	while (*args != '\0')
	{
		if (*args == '%')
			count += ft_format(*(++args), ap);
		else
			count += write(1, args, 1);
		if (count == -1)
			break ;
		args++;
	}
	va_end(ap);
	return (count);
}

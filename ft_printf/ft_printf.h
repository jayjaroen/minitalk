/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:54:15 by jjaroens          #+#    #+#             */
/*   Updated: 2024/02/03 15:19:29 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"
# define BASE_10 "0123456789"
// variadic function && macro
# include <stdarg.h>
# include <unistd.h>

void	ft_itoa(long i, int base, int *j, char *str);
void	ft_printpointer(unsigned long num, int base, int *count, char *ptr);
int		ft_printf(const char *args, ...);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putpointer(void *p);
int		ft_putnum(int i);
int		ft_puthex(unsigned int i, char c);
int		ft_putunsigned(unsigned int c);
#endif
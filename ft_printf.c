/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:58 by fhensel           #+#    #+#             */
/*   Updated: 2024/02/21 18:23:52 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search(char c, va_list args)
{
	int		length;

	length = 0;
	if (c == 'c')
		length += write_char(va_arg(args, int));
	else if (c == 's')
		length += *write_string(va_arg(args, char *));
	else if (c == 'p')
		length += write_pointer(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		length += *write_number(va_arg(args, int));
	else if (c == 'u')
		length += *write_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		length += write_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		length += write_hexx(va_arg(args, unsigned int));
	else if (c == '%')
		length += write_percent();
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			length;
	va_list		args;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_search(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}

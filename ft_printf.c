/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:50:16 by flhensel          #+#    #+#             */
/*   Updated: 2025/09/04 10:06:26 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	write_percent(void)
{
	write(1, '%', 1);
	return (1);
}

int	*write_string(char *str)
{
	int	i;
	int	*count;
	int	*length;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		length = (int *)6;
		return (length);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
		count++;
	}
	return (count);
}

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

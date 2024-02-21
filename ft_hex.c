/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:22 by fhensel           #+#    #+#             */
/*   Updated: 2024/02/21 15:15:33 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_hex(unsigned int n)
{
	int	length;

	if (n == 0)
	{
		ft_putchar_fd(0, 1);
		return (0);
	}
	else
	{
		write_hex_helper(n);
		length = ft_hex_lenght(n);
	}
	return (length);
}

int	write_hexx(unsigned int n)
{
	int	length;

	if (n == 0)
	{
		ft_putchar_fd(0, 1);
		return (0);
	}
	else
	{
		write_hexx_helper(n);
		length = ft_hex_lenght(n);
	}
	return (length);
}

void	write_hex_helper(unsigned int n)
{
	if (n >= 16)
	{
		write_hex_helper(n / 16);
		write_hex_helper(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + '0', 1);
		else
			ft_putchar_fd(n - 10 + 'a', 1);
	}
}

void	write_hexx_helper(unsigned int n)
{
	if (n >= 16)
	{
		write_hexx_helper(n / 16);
		write_hexx_helper(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + '0', 1);
		else
			ft_putchar_fd(n - 10 + 'A', 1);
	}
}

int	ft_hex_lenght(unsigned int n)
{
	int	length;

	length = 0;
	while (n != 0)
	{
		length++;
		n = n / 16;
	}
	return (length);
}

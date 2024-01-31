/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:16:43 by fhensel           #+#    #+#             */
/*   Updated: 2024/01/29 16:16:43 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int     write_pointer(unsigned long long ptr);
int     pointer_lenght(uintptr_t num);
void	pointer_help(uintptr_t num);

int	pointer_lenght(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	pointer_help(uintptr_t num)
{
	if (num >= 16)
	{
		pointer_help(num / 16);
		pointer_help(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	write_pointer(unsigned long long ptr)
{
	int length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, "0", 1);
	else
	{
		pointer_help(ptr);
		length += pointer_lenght(ptr);
	}
	return (length);
}
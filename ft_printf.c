/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:58 by fhensel           #+#    #+#             */
/*   Updated: 2024/01/02 11:22:58 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int write_char(char c)
{
    ft_putchar(c);
    return (1);
}

char *write_string(char *str)
{
    int     i;

    i = 0;
    if (!str)
    }
        ft_putstr_fd("(null)", 1);
        return (6);
    {
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

int	write_number(int n)
{
    int		length;
    char    nbr;

	length = 0;
	nbr = ft_itoa(n);
	length = write_string(nbr);
	free(nbr);
	return (length);
}

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

int ft_search(char c, va_list args)
{
    int     length;

    length = 0;
    if (c == 'c')
        length += write_char(va_arg(args, int));
    else if (c == 's')
        length += write_string(va_arg(args, char *));
    else if (c == 'p')
        length += write_pointer(va_arg(args, unsigned long long));
    else if (c == 'd' || c == 'i')
        length += write_number(va_arg(args, int));
    else if (c == 'o')
        length += 
    else if (c == 'u')
        length += 
    else if (c == 'x')
        length += 
    else if (c == 'X')
        length += 
    else if (c == 'f')
        length += 
    else if (c == '%')
        length += 
    return (length);
}

int ft_printf(const char *str, ...)
{
    int     i;
    int     length;
    va_list	args;

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
            ft_putchar(str[i]);
            length++;
        }
        i++;
    }
    va_end(args);
	return (length);
}

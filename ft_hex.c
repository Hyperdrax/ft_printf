/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:22 by fhensel           #+#    #+#             */
/*   Updated: 2024/01/29 16:40:22 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int     write_hex(unsigned int n);
int     write_hex_helper(unsigned int n);
int     ft_hex_lenght(unsigned int n);

int	write_hex(unsigned int n)
{
    int    length;
    
    if (n == 0)
        return(ft_putchar_fd(0, 1));
    else
    {
        write_hex_helper(n);
        length = ft_hex_lenght(n);
    }
    return (length);
}

int write_hexx(unsigned int n);
{
    int    length;
    
    if (n == 0)
        return(ft_putchar_fd(0, 1));
    else
    {
        write_hexx_helper(n);
        length = ft_hex_lenght(n);
    }
    return (length);
} 

int write_hex_helper(unsigned int n);
{
    if (num >= 16)
    {
        write_hex_helper(num / 16);
        write_hex_helper(num % 16);
    }
    else
    {
        if (num < 10)
            ft_putchar_fd(num + '0', 1);
        else
            ft_putchar_fd(num - 10 + 'a', 1);
    }
}

int write_hexx_helper(unsigned int n);
{
    if (num >= 16)
    {
        write_hexx_helper(num / 16);
        write_hexx_helper(num % 16);
    }
    else
    {
        if (num < 10)
            ft_putchar_fd(num + '0', 1);
        else
            ft_putchar_fd(num - 10 + 'A', 1);
    }
}

int ft_hex_lenght(unsigned int n)
{
    int     length;

	length = 0;
	while (num != 0)
	{
		length++;
		num = num / 16;
	}
    return (length);
}
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

int ft_search(char c, va_list args)
{
    int     length;

    length = 0;
    if (c == 'c')
        length += 
    else if (c == 's')
        length += 
    else if (c == 'p')
        length += 
    else if (c == 'd' || c == 'i')
        length += 
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

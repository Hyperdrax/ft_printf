/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:21:10 by florian           #+#    #+#             */
/*   Updated: 2024/02/21 18:24:27 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

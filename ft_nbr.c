/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:19:19 by fhensel           #+#    #+#             */
/*   Updated: 2024/02/21 18:37:59 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*write_number(int n)
{
	int		*length;
	char	*nbr;

	length = 0;
	nbr = ft_itoa(n);
	length = write_string(nbr);
	free(nbr);
	return (length);
}

int	*write_unsigned(unsigned int n)
{
	int		*length;
	char	*nbr;

	length = 0;
	nbr = ft_itoa(n);
	length = write_string(nbr);
	free(nbr);
	return (length);
}

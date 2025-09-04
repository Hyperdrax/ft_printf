/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:47:59 by flhensel          #+#    #+#             */
/*   Updated: 2025/09/04 09:48:39 by flhensel         ###   ########.fr       */
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

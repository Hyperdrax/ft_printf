/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:02 by fhensel           #+#    #+#             */
/*   Updated: 2024/02/21 18:36:38 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_search(char c, va_list args);
// ft_char.c
int		write_char(char c);
// ft_hex.c
int		write_hex(unsigned int n);
int		write_hexx(unsigned int n);
void	write_hex_helper(unsigned int n);
void	write_hexx_helper(unsigned int n);
int		ft_hex_lenght(unsigned int n);
// ft_nbr.c
int		*write_number(int n);
int		*write_unsigned(unsigned int n);
// ft_percent.c
int		write_percent(void);
// ft_ptr.c
int		pointer_lenght(uintptr_t num);
void	pointer_help(uintptr_t num);
int		write_pointer(unsigned long long ptr);
// ft_str.c
int		*write_string(char *str);
#endif

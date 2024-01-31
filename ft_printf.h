/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:02 by fhensel           #+#    #+#             */
/*   Updated: 2024/01/02 11:22:02 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *, ...);
int	    write_number(int n)
int     write_char(char c);
int     ft_search(char c, va_list args);
int     ft_printf(const char *str, ...);
int     write_percent();
int     write_pointer(unsigned long long ptr);
int     pointer_lenght(uintptr_t num);
int     write_hex(unsigned int n);
int     write_hex_helper(unsigned int n);
int     ft_hex_lenght(unsigned int n);
char    *write_string(char *str);
void	pointer_help(uintptr_t num);
#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:09:39 by eahn              #+#    #+#             */
/*   Updated: 2024/04/03 22:59:57 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	print_format(char specifier, va_list ap);
int	ft_printf(const char *format, ...);

int	print_c(int c);
int	print_s(char *str);
int	print_p(unsigned long long ptr);
int	convert_hex(uintptr_t n);
int	print_di(int n);
int	print_x(unsigned long n, char specifier);
int	print_u(unsigned int n);
#endif

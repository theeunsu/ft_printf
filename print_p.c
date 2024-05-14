/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:05:59 by eahn              #+#    #+#             */
/*   Updated: 2024/04/03 22:15:20 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	print_p(unsigned long long ptr, char specifier)
// {
// 	int		count;
// 	int		n;
// 	char	*symbols;

// 	n = (uintptr_t)ptr;
// 	symbols = "0123456789abcdef";
// 	if (ptr == 0)
// 		return (print_s("nil"));
// 	else
// 	{
// 		count = print_s("0x");
// 		if (n < 16)
// 			return (print_c(symbols[n]));
// 		else
// 		{
// 			count = print_dixx(n / 16, 16, specifier);
// 			return (count + print_dixx(n % 16, 16, specifier));
// 		}
// 	}
// 	return (count);
// }

int	print_p(unsigned long long ptr)
{
	int	count;

	count = 0;
	count = print_s("0x");
	if (ptr == 0)
		count = print_c('0');
	else
		count += convert_hex(ptr);
	return (count);
}

int	convert_hex(uintptr_t n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 16)
		return (print_c(symbols[n]));
	else
	{
		count = convert_hex(n / 16);
		return (count + convert_hex(n % 16));
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:07:00 by eahn              #+#    #+#             */
/*   Updated: 2024/04/03 23:16:07 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (print_s("-2147483648"));
	if (n < 0)
	{
		print_c('-');
		return (print_di(-n) + 1);
	}
	else if (n < 10)
		return (print_c(n + '0'));
	else
	{
		count = print_di(n / 10);
		return (count + print_di(n % 10));
	}
	return (count);
}

// int	print_dixx(int n, int base, char specifier)
// {
// 	int		count;
// 	char	*symbols_low;
// 	char	*symbols_up;

// 	symbols_low = "0123456789abcdef";
// 	symbols_up = "0123456789ABCDEF";
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		return (print_dixx(-n, base, specifier) + 1);
// 	}
// 	else if (n < base)
// 	{
// 		if (specifier == 'X')
// 			return (print_c(symbols_up[n]));
// 		else
// 			return (print_c(symbols_low[n]));
// 	}
// 	else
// 	{
// 		count = print_dixx(n / base, base, specifier);
// 		return (count + print_dixx(n % base, base, specifier));
// 	}
// 	return (count);
// }

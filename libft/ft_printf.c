/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:05:57 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/04/20 08:38:47 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_arg(const char *arg, int index, va_list ptr);

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		count;
	int		ret;

	va_start(ptr, s);
	count = 0;
	ret = 0;
	while (s[count])
	{
		if (s[count] == '%' && ft_strchr("cspdiuxX%", s[count + 1]))
		{
			ret = ret + ft_print_arg(s, count, ptr);
			count++;
		}
		else
			ret = ret + ft_putchar_pf(s[count]);
		count++;
	}
	va_end(ptr);
	return (ret);
}

static int	ft_print_arg(const char *arg, int index, va_list ptr)
{
	if (arg[index + 1] == '%')
		return (ft_putchar_pf(arg[index + 1]));
	else if (arg[index + 1] == 'c')
		return (ft_putchar_pf(va_arg(ptr, int)));
	else if (arg[index + 1] == 's')
		return (ft_putstr_pf(va_arg(ptr, char *)));
	else if (arg[index + 1] == 'd' || arg[index + 1] == 'i')
		return (ft_putnbr_pf(va_arg(ptr, int)));
	else if (arg[index + 1] == 'u')
		return (ft_putnbr_pfu(va_arg(ptr, unsigned int)));
	else if (arg[index + 1] == 'X')
		return (ft_puthex(va_arg(ptr, unsigned int), "0123456789ABCDEF"));
	else if (arg[index + 1] == 'x')
		return (ft_puthex(va_arg(ptr, unsigned int), "0123456789abcdef"));
	else if (arg[index + 1] == 'p')
		return (ft_putstr_pf("0x") + ft_putptr(va_arg(ptr, void *),
				"0123456789abcdef"));
	return (0);
}

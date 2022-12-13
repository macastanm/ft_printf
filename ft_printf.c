/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:42 by macastan          #+#    #+#             */
/*   Updated: 2022/12/12 14:58:50 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(const char *str, int i, va_list ap)
{
	if (str[i + 1] == '%')
		return (ft_putchar(str[i + 1]));
	else if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (str[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (str[i + 1] == 'p')
		return (ft_putpoint(va_arg(ap, unsigned long long)));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (str[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (str[i + 1] == 'x' || str[i + 1] == 'X')
	{
		if (str[i + 1] == 'x')
			return (ft_puthex(va_arg(ap, unsigned int), str[i + 1]));
		else
			return (ft_puthex(va_arg(ap, unsigned int), str[i + 1]));
	}
	else
		return (0);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_p;
	int		i;
	int		ret;

	va_start(arg_p, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			ret += ft_print_arg(str, i, arg_p);
			i++;
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(arg_p);
	return (ret);
}

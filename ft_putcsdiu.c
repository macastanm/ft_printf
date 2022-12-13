/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcsdiu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:21:11 by macastan          #+#    #+#             */
/*   Updated: 2022/12/13 14:22:46 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int nb)
{
	int		len;
	long	num;

	len = 0;
	num = nb;
	if (num < 0)
	{
		len++;
		write(1, "-", 1);
		num *= -1;
	}
	if (num <= 9)
		len += ft_putchar((num + '0'));
	if (num >= 10)
	{
		len += ft_putnbr((num / 10));
		len += ft_putnbr((num % 10));
	}
	return (len);
}

int	ft_putnbr_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb <= 9)
		len += ft_putchar((nb + '0'));
	if (nb >= 10)
	{
		len += ft_putnbr_u(nb / 10);
		len += ft_putnbr_u(nb % 10);
	}
	return (len);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[len])
		{
			ft_putchar(str[len]);
			len++;
		}
	}
	return (len);
}
